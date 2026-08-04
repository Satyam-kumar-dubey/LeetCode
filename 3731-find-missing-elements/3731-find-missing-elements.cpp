class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        vector<int>ans;
        vector<int>temp;
        int small = INT_MAX;
        int big = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            small = min(small,nums[i]);
            big = max(big,nums[i]);
        }
        for(int i=small; i<=big; i++){
            temp.push_back(i);
        }
        int first=0, second=0;
        sort(nums.begin(),nums.end());
        while(first<temp.size()){

            if(temp[first]==nums[second]){
                first++;
                second++;
                continue;
            }
            else{
                ans.push_back(temp[first]);
                first++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};