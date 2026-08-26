class Solution {
public:
    string shortestBeautifulSubstring(string s, int k)
    {
        int n = s.size();
        vector<string> v;

        for(int i = 0; i < n; i++)
        {
            string temp = "";
            int count = 0, it = i;

            while(it < n && count < k)
            {
                temp += s[it];

                if(s[it] == '1')
                count++;

                it++;
            }

            if(count == k)
            v.push_back(temp);
        }

        if(v.empty())
        return "";

        sort(v.begin(), v.end(), [](string a, string b)
        {
            if(a.size() != b.size())
            return a.size() < b.size();

            return a < b;
        });

        return v[0];
    }
};