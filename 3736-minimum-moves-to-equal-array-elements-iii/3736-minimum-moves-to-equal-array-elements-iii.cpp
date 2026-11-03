class Solution {
public:
    int minMoves(vector<int>& nums)
    {
        int mx = *max_element(nums.begin(),nums.end());
        int moves = 0;
        for(auto &x : nums)
        moves += (mx - x);

        return moves;
    }
};