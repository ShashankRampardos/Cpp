class Solution {
    class Car{
        public:
        int pos;
        int spd;
        Car(int p,int s):pos(p),spd(s){}
    };
public:
static bool myCar(Car* a,Car* b){
    return a->pos<b->pos;
}
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
          
          vector<Car*> cars;
          for(int i=0;i<position.size();i++){
                  Car *c1=new Car(position[i],speed[i]);
                  cars.push_back(c1);

          }
            sort(cars.begin(),cars.end(),myCar);
        stack<float> st;

        for(int i=0;i<position.size();i++){
           float time=(target-cars[i]->pos)/(float)cars[i]->spd;
            cout<<time<<" ";
            while(!st.empty()&&time>=st.top()){
            st.pop();
            }


            st.push(time);
            cout<<st.top()<<" ";
        }
           cout<<endl<<"{";
        for(int i=0;i<position.size();i++){
            cout<<"("<<cars[i]->pos<<","<<cars[i]->spd<<")"<<" ";
        }
        cout<<"}";
        return st.size();
    }
};
