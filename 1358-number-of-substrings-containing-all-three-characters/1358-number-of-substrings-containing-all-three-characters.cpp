class Solution {
public:
    int numberOfSubstrings(string s)
    {
        int count = 0, a = 0, b = 0, c = 0;
        int st = 0, en = 0;
        while(en < s.size())
        {
            if(s[en] == 'a')
            a++;
            else if(s[en] == 'b')
            b++;
            else 
            c++;
            
            while(a >=1 && b >=1 && c >=1)
            {
                count += s.size() - en;
                if(s[st] == 'a')
                a--;
                else if(s[st] == 'b')
                b--;
                else 
                c--;

                st++;
            }
            en++;
        }
        return count;
    }
};