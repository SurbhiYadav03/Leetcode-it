class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i=0;int maxi=-1;int j=i+1;
        while(i<nums.size()-1){
            if(nums[i]<nums[j]){
                maxi=max(maxi , nums[j]-nums[i]);
            }
            j++;
            if(j==nums.size()){
                i++,j=i+1;
            }
        }
        return maxi;
    }
};
