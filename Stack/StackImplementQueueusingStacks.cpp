class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    
    MyQueue() {
       
    }
    
    void push(int x) {
      while(!s2.empty()){
          s1.push(s2.top());
          s2.pop();
      }
      s1.push(x);
    }
    
    int pop() {
       int a=0;
       if(s1.empty()&&s2.empty()){
           return 0;
       }
       if(!s2.empty()){
           a = s2.top();
           s2.pop();
           return a;
       }
       while(!s1.empty()){
          s2.push(s1.top());
          s1.pop();
       }
       a = s2.top();
       s2.pop();
       return a;
    }
    
    int peek() {
       if(!s2.empty()){
            return s2.top();
       }
        while(!s1.empty()){
           s2.push(s1.top());
           s1.pop();
       }
       return s2.top();
    }
    
    bool empty() {
        if(s1.empty()&&s2.empty()){
            return true;
        }
        else
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
