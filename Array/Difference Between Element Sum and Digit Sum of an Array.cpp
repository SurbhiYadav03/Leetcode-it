class Solution {
public:
    int sum1=0,sum2=0;
    int differenceOfSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
           sum1=sum1+nums[i];
           while(nums[i]){
               sum2=sum2+nums[i]%10;
               nums[i]=nums[i]/10;
           }
        }
        return abs(sum1-sum2);
    }
};
