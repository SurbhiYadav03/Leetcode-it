class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        string temp1 = s1;
        string temp2 = s2;

        if(s1==s2)
        return true;
        
        else 
        {
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());

            for(int i=0;i<s2.length();i++){
            if(s1[i]!=s2[i])
            return false;
            }
            
            //all char are equal --> now check for swapping
            for(int i=0;i<temp2.length();i++){
            if(temp1[i]!=temp2[i])
            count++;
            }
            //can be equal iff 2 chars are at mismatched position and rest are at correct
            if(count==2){
                return true;
            }
        }
        return false;
    }
};
