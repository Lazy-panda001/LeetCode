class MyStack {
public:
    queue<int> qu; // only one queue is enough
    MyStack() 
    {
        
    }
    
    void push(int x) 
    {
        qu.push(x);  // 1. push x value
        
        int size = qu.size();  // 2. find size of queue
        int run = size-1;      // 3. run loop for size - 1;
        
        while(run--) 
        {
            qu.push(qu.front());   // 4. pop from queue and agian push into queue
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