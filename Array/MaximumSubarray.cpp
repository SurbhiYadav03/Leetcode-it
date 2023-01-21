class Solution {
public:
    int ans = INT_MIN,sum=0;
    //kadane's algo
    int maxSubArray(vector<int>& nums) {
      for(int i=0;i<nums.size();i++){
          sum=sum+nums[i];
          ans=max(ans,sum);
          if(sum<0){
              sum=0;
          }
      }
    return ans;

    }
};
