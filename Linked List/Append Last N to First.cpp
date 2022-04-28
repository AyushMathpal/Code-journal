Node *appendLastNToFirst(Node *head, int n){
    Node*temp=head;
    if(head==NULL || head->next==NULL)return head;
    int cnt=1;
    while(temp->next!=NULL){
        cnt++;
        temp=temp->next;
    }
    
    Node*temp1=head;
    int len1=cnt-n-1;
    while(len1--){
        temp1=temp1->next;
    }
    Node*temp2=head;
    int len2=cnt-n;
    while(len2--){
        temp2=temp2->next;
    }
    temp1->next=NULL;
    temp->next=head;
    
    return temp2;
}
