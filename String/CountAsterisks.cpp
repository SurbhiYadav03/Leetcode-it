class Solution {
public:
    int countAsterisks(string s) {
        int temp=0,count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|'){
                temp++;
            }
            if(temp%2==0){
                if(s[i]=='*'){
                    count++;
                }
            }
        }
        return count;
    }
};
