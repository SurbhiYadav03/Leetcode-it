class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()-1){
            int j=i+1;
            if(nums[i]==nums[j]){
                i=i+2;
            }
            else{
               ans.push_back(nums[i]);
               i++;
            }
        }
        if(i==nums.size()-1){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};


