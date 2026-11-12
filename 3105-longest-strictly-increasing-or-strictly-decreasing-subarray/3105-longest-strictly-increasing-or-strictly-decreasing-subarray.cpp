class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums)
    {
        int inc = 1, dec = 1;
        for(int i=0; i<nums.size(); i++)
        {
            int curr = 1;
            for(int j=i; j<nums.size(); j++)
            {
                if( j+1 < nums.size() && nums[j+1] > nums[j])
                curr++;
                else
                break;
            }
            inc = max(inc,curr);
        }
        for(int i=0; i<nums.size(); i++)
        {
            int curr = 1;
            for(int j=i; j<nums.size(); j++)
            {
                if( j+1 < nums.size() && nums[j+1] < nums[j])
                curr++;
                else
                break;
            }
            dec = max(dec,curr);
        }
        return max(inc,dec);
    }
};