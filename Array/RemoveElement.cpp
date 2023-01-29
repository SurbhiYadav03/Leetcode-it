class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;int temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                count++;
                swap(nums[i],nums[temp]);
                temp++;
            }
        }
        return count;
    }
};
