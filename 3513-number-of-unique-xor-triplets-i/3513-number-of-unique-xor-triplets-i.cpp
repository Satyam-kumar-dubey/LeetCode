class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums)
    {
        if(nums.size() < 3)
        return nums.size();
        
        int temp = 0;
        for(auto x : nums)
        temp = temp | x;

        return temp+1;
    }
};