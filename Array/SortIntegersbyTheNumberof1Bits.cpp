class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>mp(arr.size());

        for(int i=0;i<arr.size();i++){
            mp[i] = {__builtin_popcount(arr[i]),arr[i]};
        }
        sort(mp.begin(),mp.end());
        for(int i=0;i<arr.size();i++){
            arr[i] = mp[i].second;
        }
        return arr;
    }
};
