class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int sum = 0;
        for(auto &x: nums)
        sum += x;

        int ls = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(ls == (sum - ls - nums[i]))
            return i;
            else
            ls += nums[i];
            
        }
        return -1;
    }
};