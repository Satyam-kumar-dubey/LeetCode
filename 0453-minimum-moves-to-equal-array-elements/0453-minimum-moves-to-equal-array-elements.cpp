using ll = long long;

class Solution {
public:
    int minMoves(vector<int>& nums)
    {
        int mn = *min_element(nums.begin(), nums.end());

        ll moves = 0;
        for(int x : nums)
        moves += (x - mn);

        return moves;
    }
};