class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1,e=pow(10,9),mid;
        while(s<e)
        {
            int sum=0;
            mid = s+(e-s)/2;

            for(int i=0;i<piles.size();i++)
            {
                if(piles[i]%mid==0){
                sum+=piles[i]/mid;
                }
                else{
                sum+=(piles[i]/mid)+1;
                }
            }
            
            if(sum<=h){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};
