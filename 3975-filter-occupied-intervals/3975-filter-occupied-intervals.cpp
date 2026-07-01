class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& v, int fs, int fe)
    {
        vector<vector<int>> ans;

        if (v.empty())
        return ans;

        sort(v.begin(), v.end());

        int currStart = v[0][0];
        int currEnd = v[0][1];

        for (int i = 1; i < v.size(); i++)
        {
            int nextStart = v[i][0];
            int nextEnd = v[i][1];

            if (nextStart <= currEnd + 1)
            {
                currEnd = max(currEnd, nextEnd);
            }
            else
            {
                ans.push_back({currStart, currEnd});

                currStart = nextStart;
                currEnd = nextEnd;
            }
        }

        ans.push_back({currStart, currEnd});

        vector<vector<int>>res;
        for(auto &it : ans)
        {
            int st = it[0];
            int en = it[1];

            if (en < fs || st > fe)
            {
                res.push_back({st, en});
            }
            else if (fs <= st && en <= fe)
            {
                continue;
            }
            else if (st < fs && en <= fe)
            {
                res.push_back({st, fs - 1});
            }
            else if (fs <= st && en > fe)
            {
                res.push_back({fe + 1, en});
            }
            else if (st < fs && en > fe)
            {
                res.push_back({st, fs - 1});
                res.push_back({fe + 1, en});
            }
        }
        return res;
    }
};