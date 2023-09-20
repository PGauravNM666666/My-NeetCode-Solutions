class MinStack {
public:
    stack<pair<long long int, long long int>> s;
    long long int minelement = numeric_limits<int>::max();
    MinStack() {
        minelement = numeric_limits<int>::max();
    }
    
    void push(int val) {

        minelement = (val < minelement)? val: minelement;
        s.push({val, minelement});
        }
    
    void pop() {
        s.pop();
        if(!s.empty())
            minelement = s.top().second;
        else
            minelement = numeric_limits<int>::max();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */