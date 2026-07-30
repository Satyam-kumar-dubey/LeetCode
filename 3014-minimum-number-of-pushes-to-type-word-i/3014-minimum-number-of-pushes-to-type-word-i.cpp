class Solution {
public:
    int minimumPushes(string word)
    {
        int q = word.size() / 8;
        int r = word.size() % 8;

        int ans = 0, mx = 1;
        while(q--)
        {
            ans += 8 * mx;
            mx++;
        }
        
        ans += r * mx;
        return ans;
    }
};