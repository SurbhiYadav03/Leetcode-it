class Solution {
    public: int findFinalValue(vector<int>& nums, int original) {
        while(1) {
            for(int i=0; i<nums.size(); i++) {
                for(int j=0; j<nums.size(); j++) {
                    if(nums[j]==original) {
                        original=2 * original;
                        break;
                    }
                }
            }

            break;
        }

        return original;
    }
};
