class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hm;
        for(int i=0; i<nums.size(); i++)
            hm[nums[i]]++;

        vector<vector<int>> buckets(nums.size()+1);
        for(auto &i:hm)
            buckets[i.second].push_back(i.first);

        vector<int> result;
        for(int i=buckets.size()-1; i>0; i--)
        {
            if(buckets[i].size() <= 0) continue; 
            for(auto &j:buckets[i])
            {
                result.push_back(j);
                if(result.size()==k)
                    return result;
            }
                
        }    

        return {};
    }
};
