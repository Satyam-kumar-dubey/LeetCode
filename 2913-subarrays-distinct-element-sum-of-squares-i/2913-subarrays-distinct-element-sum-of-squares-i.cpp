class Solution {
public:
    int sumCounts(vector<int>& nums)
    {
        set<int>s;
        int ans = 0;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i; j<nums.size(); j++)
            {
                for(int k=i; k<=j; k++)
                s.insert(nums[k]);

                ans += (s.size() * s.size());
                s.clear();
            }
        }
        return ans;
    }
};