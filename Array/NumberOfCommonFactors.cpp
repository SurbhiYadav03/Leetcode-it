class Solution {
public:
    int commonFactors(int a, int b) {
        //1 will always be a factor
        int count=1;
        for(int i=2;i<=b;i++){
            if(a%i==0 && b%i==0){
                count++;
            }
        }
        return count;
    }
};
