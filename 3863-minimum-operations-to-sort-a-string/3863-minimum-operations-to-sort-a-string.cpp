class Solution {
public:
    int minOperations(string s)
    {
        char mini = 'z', maxi = 'a';
        for(int i=0; i<s.size(); i++)
        {
            mini = min(s[i],mini);
            maxi = max(s[i],maxi);
        }

        if(ranges::is_sorted(s))
        return 0;

        if(s.size() == 2)
        return -1;

        if(s[0] == mini || s[s.size()-1] == maxi)
        return 1;

        for(int i=1; i<s.size()-1; i++)
        {
            if(s[i] == mini || s[i] == maxi)
            return 2;
        }
        return 3;
    }
};