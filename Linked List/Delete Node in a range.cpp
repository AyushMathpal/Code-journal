Node* deleteNode(Node* head, int i,int n){
    if(i==0){
        while(i<=n){
        head=head->next;
        i++;
        }
        return head;
    }
    int k=0;
    Node*temp=head;
    while(k<i-1 && temp!=NULL){
        temp=temp->next;
        k++;
    }
    
    if(temp==NULL ||temp->next==NULL)return head;
    while(i<=n){
        Node*temp1=temp->next;
        temp1=temp1->next;
        temp->next=temp1;
        i++;
    }
    return head;
        
}
