
Node* insertNode(Node* head, int i, int data){
    
    
    
    if(i==0){
        Node*newnode=new Node(data);
        newnode->next=head;
        return newnode;
    }
    int k=0;
    Node*temp=head;
    while(k<i-1 && temp!=NULL){
        temp=temp->next;
        k++;
    }
    if(temp==NULL)return head;
        
       
    Node*storage=temp->next;
    Node*newnode=new Node(data);
    temp->next=newnode;
    newnode->next=storage;
    return head;
    
}   
