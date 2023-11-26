for (int i = 0; i < s.size(); i++) {
   // cout << "Checking: " << s[i] << " ";
    if (!st.empty() && s[i] == '}' && st.top() == '{') {
        st.pop();
      //  cout << "Match! bye";
    } else {
        st.push(s[i]);
     //   cout << "Pushed";
    }
  //  cout << endl;
}


   // cout<<st.size()<<" ";
    int count=0;
    while(!st.empty()){
        
        char t1=st.top();
        st.pop();
        char t2=st.top();
        st.pop();
      // cout<<t1<<" "<<t2;
        if(t1=='}'&&t2=='{'||t1=='{'&&t2=='}')
          count=count+2;
          else
        if(t1=='{'&&t2=='{'||t1=='}'&&t2=='}')
           count++;
    }
    return count;
     
}
