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
        if(f && l == s.size()-1)
        return true;
        else if(u == s.size() || l == s.size())
        return true;
        else
        return false;
    }
};