class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        int i=0,j=i+1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                ans=nums[i];
            }
            i++;j=i+1;
        }
        return ans;
    }
};
