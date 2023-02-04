int cal(int num1,int num2,string ch)
{
    if(ch=="+")
        return num1+num2;
    
    if(ch=="-")
        return num1-num2;
    
    if(ch=="*")
        return num1*num2;
    
    return num1/num2;
    
}
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s; int curr;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*"|| tokens[i]=="/"){
                if(!s.empty()){
                    int num2=s.top();
                    s.pop();
                    int num1=s.top();
                    s.pop();
                    curr = cal(num1,num2,tokens[i]);
                    s.push(curr);
                }
            }
            else{
                int ch = stoi(tokens[i]);
                s.push(ch);
            }
        }
        return s.top();
    }
};
