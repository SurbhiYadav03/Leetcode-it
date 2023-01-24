class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff = arr[1]-arr[0];
        int i=1,j=2;
        while(j<arr.size())
        {
               if(arr[j]-arr[i]!=diff){
                   return false;
               }
               i++;j++;
        }
        return true;
    }
};
