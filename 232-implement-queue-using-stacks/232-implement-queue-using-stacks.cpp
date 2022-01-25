class MyQueue {
public:
  
  stack<int> s1,s2;
    // s1 ==> input queue ,, s2==> output queue
    
  
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element 'x' through the 'rear'. */
    void push(int x) 
    {
      s1.push(x);
      
        
    }
    
    /** Removes the element 'x' from  'front' of the queue and returns that element. */
    int pop() 
    {
      if(!s2.empty()) // If S2 queue is not empty then pop from S2
      {
        int val = s2.top();
        s2.pop();
        return val;
      }
        
      else
      {
        while(s1.size())
        {
          s2.push(s1.top());
          s1.pop();
        }
      }
        
      int val2 = s2.top(); // now pop from S2
      s2.pop();
      return val2;
        
    }
    
    /** Get the front element. */
    int peek() 
    {
      if(!s2.empty())
      {
        return s2.top();
      }
      else
      {
        while(s1.size())
        {
          s2.push(s1.top());
          s1.pop();
        }
      }
      return s2.top();
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() 
    {
      return s1.empty() && s2.empty();
        
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