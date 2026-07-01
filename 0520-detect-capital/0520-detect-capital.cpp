class Solution {
public:
    bool detectCapitalUse(string s)
    {
        int u = 0, l = 0;
        for(char c : s)
        {
            if(isupper(c))
            u++;
            else
            l++;
        }
        bool f = isupper(s[0]);

        return ((f && l == s.size()-1) || (u == s.size() || l == s.size()) ? true : false);

    }
};