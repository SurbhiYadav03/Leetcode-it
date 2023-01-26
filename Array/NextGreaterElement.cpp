class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int i=0,j=0;
        int temp;
        
        while(i<nums1.size())
        {
            int ans=0;
            while(j<nums2.size())
            {
                if(nums1[i]==nums2[j]){
                temp=nums2[j];
                break;
                }
                else
                j++;
            }
            
            for(int k=j+1;k<nums2.size();k++){
                if(nums2[k]>temp){
                    ans=nums2[k];
                    break;
                }
            }
            
            if(ans==0){
                res.push_back(-1);
            }
            else{
                res.push_back(ans);
            }
            j=0;i++;
        }
        
        return res;
    }
};
