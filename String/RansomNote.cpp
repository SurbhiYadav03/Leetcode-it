class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());

        int i=0,j=0;
        while(i<ransomNote.length())
        {
                if(j==magazine.length()){
                    return false;
                }
                if(ransomNote[i]==magazine[j]){
                    i++;j++;
                }
                else{
                    j++;
                }
        }
        return true;
    }
};
