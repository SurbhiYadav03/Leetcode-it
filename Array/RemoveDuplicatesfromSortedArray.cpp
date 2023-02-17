class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0,j=i+1;
       int count=0;
       vector<int>::iterator it1, it2;
       while(j<nums.size()){
           if(nums[i]!=nums[j]){
               i++;
               swap(nums[i],nums[j]);
               count++;
               j++;
           }
           else
           j++;
       }
       count++;
       it1 = nums.begin()+count;
       it2 = nums.end();
       nums.erase(it1,it2);
       return count;
    }
};
