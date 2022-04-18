
int PrintNode(Node* head, int pos){
    int k=0;
    Node*temp=head;
    while(temp!=NULL && k<pos){
        temp=temp->next;
        k++;
    }
    if(temp!=NULL){
        return temp->data;
    }
    return -1;
}
