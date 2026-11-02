class Solution {
public:
    int minMoves2(vector<int>& v)
    {
        sort(v.begin(),v.end());
        int mid = v.size() / 2;

        int moves = 0;
        for(int x : v)
        moves += abs(x - v[mid]);

        return moves;
    }
};