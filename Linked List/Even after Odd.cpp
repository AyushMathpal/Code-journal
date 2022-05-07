//From Submissions-not able to do it on my own
Node *evenAfterOdd(Node *head)
{
	//write your code here
    if(head==NULL){
        return head;
    }
    Node *temp=head;
    Node *ot=NULL;
    Node *oh=NULL;
    Node *et=NULL;
    Node *eh=NULL;
    while(temp!=NULL){
        if(temp->data%2!=0){
            if(oh==NULL){
                oh=temp;
                ot=temp;
            }
            else{
                ot->next=temp;
                ot=temp;
            }
        }
        else{
            if(eh==NULL){
                eh=temp;
                et=temp;
            }
            else{
                et->next=temp;
                et=temp;
            }
        }
        temp=temp->next;
    }
    
    if(ot!=NULL){
        ot->next=NULL;
    }
    if(et!=NULL){
        et->next=NULL;
    }
    if(oh==NULL){
        return eh;
    }
    ot->next=eh;
    
    return oh;
}
