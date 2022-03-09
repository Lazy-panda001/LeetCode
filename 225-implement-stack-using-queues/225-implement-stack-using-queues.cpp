class MyStack {
public:
    queue<int> qu;
    MyStack() 
    {
        
    }
    
    void push(int x) 
    {
        qu.push(x);
        
        int size = qu.size();
        int run = size-1;
        
        while(run--)
        {
            qu.push(qu.front());
            qu.pop();
        }
        return;
        
    }
    
    int pop() 
    {
        int val = qu.front(); qu.pop();
        return val;
        
    }
    
    int top() 
    {
        return qu.front();
        
    }
    
    bool empty() 
    {
        if(qu.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */