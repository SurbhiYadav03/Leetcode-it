class Solution {
    public: vector<int>searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int i=0,
        j=nums.size()-1;

        while(i<nums.size()) {
            if(nums[i]==target) {
                ans.push_back(i);
                break;
            }

            else {
                i++;
            }
        }

        while(j>=0) {
            if(nums[j]==target) {
                ans.push_back(j);
                break;
            }

            else {
                j--;
            }
        }

        if(ans.size()==0) {
            ans.push_back(-1);
            ans.push_back(-1);
        }

        return ans;
    }
}

;
