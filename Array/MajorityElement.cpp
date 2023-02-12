class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2,ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto &it : mp){
           if(it.second>n)   
           ans = it.first;
        }
        return ans;
    }
};
