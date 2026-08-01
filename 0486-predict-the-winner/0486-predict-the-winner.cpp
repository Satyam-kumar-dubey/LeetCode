class Solution {
public:

    int solve(vector<int>&nums, vector<vector<int>>&dp, int i, int j)
    {
        if(i == j)
        return nums[i];

        if(dp[i][j] != -1)
        return dp[i][j];

        int l = nums[i] - solve(nums,dp,i+1,j);
        int r = nums[j] - solve(nums,dp,i,j-1);

        return dp[i][j] = max(l,r);
    }
    
    bool predictTheWinner(vector<int>& nums)
    {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));

        int val = solve(nums,dp,0,n-1);
        return val >= 0;
    }
};