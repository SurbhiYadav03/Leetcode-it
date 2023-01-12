class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        vector<int>ans(nums.size());
        int f=0,l=nums.size()-1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans[f]=nums[i];
                f++;
            }
            else{
                ans[l]=nums[i];
                l--;
            }
        }
        return ans;
    }
};
