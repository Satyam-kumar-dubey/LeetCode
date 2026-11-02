class Solution {
public:
    int minMoves2(vector<int>& v)
    {
        sort(v.begin(),v.end());
        int mid = v.size() / 2;

        int moves = 0;
        for(int i=0; i<=mid; i++)
        moves += v[mid] - v[i];

        for(int i=mid+1; i<v.size(); i++)
        moves += v[i] - v[mid];

        return moves;
    }
};