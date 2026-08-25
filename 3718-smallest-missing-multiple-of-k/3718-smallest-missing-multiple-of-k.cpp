class Solution {
public:
    int missingMultiple(vector<int>& nums, int k)
    {
        set<int>s(nums.begin(),nums.end());

        int it = 1;
        while(it <= 101)
        {
            int val = k * it;
            if(s.find(val) == s.end())
            return val;

            it = it+1;
        }

        return 0;
    }
};