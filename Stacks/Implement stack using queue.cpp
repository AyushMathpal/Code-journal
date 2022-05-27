
void Stack :: push(int x){
    curr_size++;
 
        // Push x first in empty q2
        q2.push(x);
 
        // Push all the remaining
        // elements in q1 to q2.
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
 
        // swap the names of two queues
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
}
void Stack :: pop(){
      // if no elements are there in q1
        if (q1.empty())
            return;
        q1.pop();
        curr_size--;
}
int Stack :: top(){
     if (q1.empty())
            return -1;
        return q1.front();
}
          
