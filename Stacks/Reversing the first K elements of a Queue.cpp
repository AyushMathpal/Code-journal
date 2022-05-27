#ONLY USING QUEUES
void reverseQueue(queue<int>&q){
    if(q.empty())return;
    int top=q.front();
    q.pop();
    reverseQueue(q);
    q.push(top);
}
void reverseQueueFirstKElements(int k, queue<int>& Queue){
    if(k==0)return;
    queue<int>q;
    while(k--){
        int top=Queue.front();
        Queue.pop();
        q.push(top);
    }

    reverseQueue(q);
    while(!Queue.empty()){
        int top=Queue.front();
        Queue.pop();
        q.push(top);
    }
    
     while(!q.empty()){
        int top=q.front();
        q.pop();
        Queue.push(top);
    }
   // reverseQueue(Queue);
    
}
#USING QUEUE AND STACK
void reverseQueueFirstKElements(int k, queue<int>& Queue)
{
    if (Queue.empty() == true || k > Queue.size())
        return;
    if (k <= 0)
        return;
 
    stack<int> Stack;
 
    /* Push the first K elements
       into a Stack*/
    for (int i = 0; i < k; i++) {
        Stack.push(Queue.front());
        Queue.pop();
    }
 
    /* Enqueue the contents of stack
       at the back of the queue*/
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
 
    /* Remove the remaining elements and
       enqueue them at the end of the Queue*/
    for (int i = 0; i < Queue.size() - k; i++) {
        Queue.push(Queue.front());
        Queue.pop();
    }
}
