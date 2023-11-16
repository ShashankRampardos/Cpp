class Solution {
public:
    int* rightSmallerElement(vector<int>& heights){
        int size=heights.size();
        stack<int> st;
        st.push(size);
        int *a=new int[size];
        for(int i=size-1;i>=0;i--){
            int curr=st.top();
            while(curr!=size&&heights[curr]>=heights[i]){
                st.pop();
                // -1 tho rahay gaa he hamesa is lia isempty() key jarurath nahi hay idhar an idhar na while loop may
                curr=st.top();
            }
            
            st.push(i);
            a[i]=curr;

        }
        return a;
    }
    int* leftSmallerElement(vector<int>& heights){
        int size=heights.size();
        stack<int> st;
        st.push(-1);
        int *a=new int[size];
        for(int i=0;i<size;i++){
            int curr=st.top();
            while(curr!=-1&&heights[curr]>=heights[i]){
              st.pop();
              // -1 tho rahay gaa he hamesa is lia isempty() key jarurath nahi hay idhar an idhar na while loop may
                curr=st.top();
            }
            
            st.push(i);
            a[i]=curr;
        }
        return a;
    }
    int largestRectangleArea(vector<int>& heights) {
           if(heights.empty())return {};

           int *left=leftSmallerElement(heights);
           int *right=rightSmallerElement(heights);
           int size=heights.size();
           int area=0;
           
           for(int i=0;i<size;i++){
              int width=right[i]-left[i]-1;
              cout<<"this:"<<right[i]<<" "<<left[i]<<endl;
              int currArea=width*heights[i];
             
              if(currArea>area)
              area=currArea;

           }
           return area;
    }
};
