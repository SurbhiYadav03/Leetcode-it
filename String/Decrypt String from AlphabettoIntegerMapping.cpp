class Solution {
  public: string freqAlphabets(string s) 
  {
    string ans="";
    string j="";
    
    unordered_map<int,
    char>m;
    for(int i=0; i<26; i++) {
      m[i+1]='a'+i;
    }
    
    for(int i=0; i<s.length()-1; i++)
    {
      if(s[i+2]=='#') {
        j=j+s[i]+s[i+1];
        i=i+2;
      }
      else if(s[i+2] !='#') {
        j=j+s[i];
      }
      int temp=stoi(j);
      ans.push_back(m[temp]);
      j.erase();
    }
    
    if(s[s.length()-1] !='#')
    {
      j=j+s[s.length()-1];
      int temp=stoi(j);
      ans.push_back(m[temp]);
    }
    
    return ans;
  }
};
