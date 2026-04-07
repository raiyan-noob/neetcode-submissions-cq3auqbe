class MinStack {
public:
stack<int>s;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        stack<int>temp=s;
        int mini=temp.top();
        while(!temp.empty())
        {
            mini= min(mini,temp.top());
            temp.pop();
        }
        return mini;
    }
};
