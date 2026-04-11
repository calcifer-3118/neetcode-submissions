class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hm;
        for(int i=0; i<nums.size(); i++)
            hm[nums[i]]++;

        vector<pair<int, int>> arr;    
        for(auto &i:hm)
            arr.push_back({i.first, i.second});

        sort(arr.begin(), arr.end(), [](auto &a, auto &b)
        {
            return a.second>b.second;
        });

        vector<int> result(k);
        for(int i=0; i<k; i++)
            result[i]=arr[i].first;
                
        return result;
    }
};
