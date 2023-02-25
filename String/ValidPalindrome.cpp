class Solution {
public:
    bool isPalindrome(string s) {
        int k=0;
        while(k<s.length()){
            if(s[k]>='A' && s[k]<='Z'){
                s[k]=s[k]+32;
            }            
            if( !( (s[k]>='a'&&s[k]<='z') || (s[k]>='0' && s[k]<='9') ) ){
                s.erase(k,1);
            }
            else{
                k++;
            }
        }
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;j--;
            }
        }
        return true;
    }
};
