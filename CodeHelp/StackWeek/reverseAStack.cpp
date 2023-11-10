class Solution{
public:
    void insertAtBottom(stack<int> &s,int x){
        if(s.empty()){
            s.push(x);
            return;
        }
        //ek case may solve karunga
        int temp=s.top();
        s.pop();
        // baki recursion samal lega
        insertAtBottom(s,x);
        // back track
        s.push(temp);
    }

    void Reverse(stack<int> &s){
        if(s.empty()){
            return;
        }
        //ek case may solve
        int temp=s.top();
        s.pop();
        //baki recursion
        Reverse(s);
        //back track
        insertAtBottom(s,temp);
    }
};
