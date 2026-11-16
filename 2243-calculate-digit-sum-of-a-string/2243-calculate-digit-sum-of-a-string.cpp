
class Solution {
public:
    string digitSum(string s, int k)
    {
        while (s.size() > k)
        {
            string ans;
            int it = 0;

            while ((it + k) <= s.size())
            {
                int sm = 0;

                for (int j = it; j < it + k; j++)
                {
                    int val = s[j] - '0';
                    sm += val;
                }

                ans += to_string(sm);
                it += k;
            }

            int sm = 0;
            while (it < s.size())
            {
                int val = s[it] - '0';
                sm += val;
                it++;
            }

            if (it > 0 && s.size() % k != 0)
                ans += to_string(sm);

            s = ans;
        }

        return s;
    }
};
