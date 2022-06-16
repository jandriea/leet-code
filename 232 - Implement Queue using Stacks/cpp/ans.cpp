class MyQueue {
public:
    stack<int> s;
    int firstValue;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        if (s.empty()) {
            firstValue = x;
        }
        s.push(x);

        return;
    }
    
    int pop() {
        stack<int> temp;
        // save the value to temp stack
        // and exclude the first data
        for(int i = s.size(); i > 1; i--){
            temp.push(s.top());
            s.pop();
        }
        // pop the first data
        int ret = s.top();
        s.pop();
        
        while (!temp.empty()) {
            int x = temp.top();
            if (s.empty()) {
                firstValue = x;
            }
            s.push(x);
            temp.pop();
        }
        
        return ret;
    }
    
    int peek() {
        return firstValue;
    }
    
    bool empty() {
        return s.empty();
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