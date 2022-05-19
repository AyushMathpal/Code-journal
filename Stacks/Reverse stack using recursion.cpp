void insert_at_bottom(stack<int>& s,int x){
    stack<int> s2;
    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }
    s.push(x);
    while(!s2.empty()){
        s.push(s2.top());
        s2.pop();
    }
}

void reverse(stack<int> & st)
{
   if(st.size()==0) return;
   int x = st.top();
   st.pop();
   reverse(st);
   insert_at_bottom(st,x);
}
