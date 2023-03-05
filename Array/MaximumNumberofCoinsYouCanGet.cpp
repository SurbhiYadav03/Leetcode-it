class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i=0,j=piles.size()-2;
        int sum=0;
        while(i<=j){
            sum+=piles[j];
            j=j-2;
            i++;
        }
        return sum;
    }
};
