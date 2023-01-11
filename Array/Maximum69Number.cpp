class Solution {
public:
    int maximum69Number (int num) {
        string a = to_string(num);
        for(int i=0;i<a.length();i++){
            if(a[i]=='6'){
                a[i]='9';
                break;
            }
        }
        int ans=0;
        //string to int (int ans = stoi(a);)
        for(int i=0;i<a.length();i++){
            ans=(ans*10)+a[i]-'0';
        }
        return ans;
    }
};
