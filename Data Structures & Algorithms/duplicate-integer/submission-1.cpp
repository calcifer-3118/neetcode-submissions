class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hm;
        for(int i=0; i<nums.size(); i++)
        {
            if(hm.count(nums[i]))
              return true;
            hm.insert(nums[i]);
        }

        return false;
    }
};