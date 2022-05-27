void Queue :: enQueue(int x){
       s1.push(x);
       
}
int Queue :: deQueue(){
    int size=s1.size();
    
      while(size!=1){
          int top=s1.top();
          s1.pop();
          s2.push(top);
          size--;
      }
      int pop_element=s1.top();
      s1.pop();
      while(!s2.empty()){
          int top=s2.top();
          s2.pop();
          s1.push(top);
      }
      return pop_element;
}
