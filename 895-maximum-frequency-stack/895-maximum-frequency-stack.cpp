class FreqStack {
public:
    unordered_map<int,int> freq;
    unordered_map<int, stack<int>> ump;
    int max_freq = 0;
    
    FreqStack() {
        
    }
    
    void push(int val) 
    {
        max_freq = max(max_freq, ++freq[val]); // tracking maximum freq and making map
        ump[freq[val]].push(val);
    }
    
    int pop() 
    {
        int poped = ump[max_freq].top();
        ump[max_freq].pop();
        
        freq[poped]--;
        
        if(ump[max_freq].size() == 0)
        {
            max_freq--;
        }
        
        return poped;  
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */