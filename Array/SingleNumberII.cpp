class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()-1){
            int j=i+1;
            if(nums[i]==nums[j]){
                i=i+3;
            }
            else{
                return nums[i];
            }
        }
        return nums[i];
    }
};
