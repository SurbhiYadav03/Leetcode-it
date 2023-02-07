bool ispalindrome(string s){
    int i=0,j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        else{
            i++;j--;
        }
    }
    return true;
}
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            if(ispalindrome(words[i])){
                return words[i];
            }
        }
        return ans;
    }
};
