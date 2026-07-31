class Solution {
public:
    int minimumPushes(string word)
    {
        vector<int>f(26,0);
        for(char c : word)
        {
            f[c-'a']++;
        }

        sort(f.rbegin(),f.rend());
        
        int ans = 0, grp = 1, counter = 0;
        for(int i=0; i<26; i++)
        {
            if(f[i] == 0)
            break;

            ans += f[i] * grp;
            counter++;

            if(counter == 8)
            {
                counter = 0;
                grp++;
            }
        }
        return ans;
    }
};