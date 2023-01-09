class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1;
        int sum = 0;
        
        while (n>0)
        {
            int a = n%10;
            sum+=a;
            p=p*a;
            n=n/10;
        }
        return (p-sum);
    }
};
