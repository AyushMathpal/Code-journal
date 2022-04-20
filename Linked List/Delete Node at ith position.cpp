Node* deleteNode(Node* head, int i){
    if(i==0){
        head=head->next;
        return head;
    }
    int k=0;
    Node*temp=head;
    while(k<i-1 && temp!=NULL){
        temp=temp->next;
        k++;
    }
    if(temp==NULL ||temp->next==NULL)return head;
    Node*temp1=temp->next;
    temp1=temp1->next;
    temp->next=temp1;
    return head;
        
}
