using ll =  long long;

class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul)
    {
        ll sum = 0;
        sort(nums.begin(),nums.end());

        int it = nums.size()-1;
        while(k)
        {
            (mul > 1 ? sum += 1LL*nums[it]*mul : sum += nums[it]);
            it--;
            mul--;
            k--;
        }
        return sum;
    }
};