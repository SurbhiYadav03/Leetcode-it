bool palindrome(int i , int j ,string temp){
    while(i<=j){
        if(temp[i]!=temp[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}
class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;j--;
            }
            else
            return palindrome(i+1,j,s) || palindrome(i,j-1,s);
        }
        return true;
    }
};
