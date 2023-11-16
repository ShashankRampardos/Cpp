class MinStack {
 vector<pair<int,int>> v;
public:
    MinStack() {
       // philal jarurat nahi
        
    }
    // push may hi hay bas thoda code to maintain minimum of all element value
    void push(int val) {
        if(isEmpty()){
        pair<int,int> p=make_pair(val,val);
       // p.first=val;
        //p.second=val;
        v.push_back(p);
        }
        else{
        pair<int,int> p=make_pair(val,min(val,v.back().second));
        //p.first=val;
        //p.second=min(val,v.back().second);
        v.push_back(p);
        }

    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
    }
    bool isEmpty(){
        return !v.size();
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
