class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hm;
        int maxCount = 0;

        for(int i=0; i<nums.size(); i++)
            hm.insert(nums[i]);

        for(int i=0; i<nums.size(); i++)
        {
            if(!hm.count(nums[i]-1))
            {
                int length=0;
                while(hm.count(nums[i]+length))
                    length++;   
                maxCount = max(maxCount, length);     
            }
        }    

        return maxCount;
    }
};
