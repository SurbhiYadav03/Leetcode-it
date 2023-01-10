class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7){
         return true;
        }
        if(n>1 && n<9){
            return false;
        }
        else{
        int sum=0;
        while(n!=0)
        {
            sum=sum+pow(n%10,2);
            n=n/10; 
        }
        return isHappy(sum);
       }
    }
    
};
