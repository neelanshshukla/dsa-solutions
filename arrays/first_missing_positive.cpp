class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        unordered_set<int> check;
        for(int i = 0;i < nums.size(); i++)
        {
            check.insert(nums[i]);
        }

        for(int i = 1; i <= nums.size(); i++)
        {
            if(check.find(i) == check.end()) return i;
        }
        return nums.size() + 1;
    }
};