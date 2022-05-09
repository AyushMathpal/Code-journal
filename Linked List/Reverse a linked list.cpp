//ITERATIVE
Node* reverseLL(Node* head){
    if(head==NULL)return head;
    if(head!=NULL && head->next==NULL)return head;
    
    
    Node*prev=NULL;
    Node*nextNode=NULL;
    Node*curr=head;
    while(curr!=NULL ){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
        
        
    }
    return prev;
    
    
}
//RECURSIVE
Node* reverseLL(Node* head){

	if(head == NULL || head->next == NULL)return head;

	Node*reversedHead = reverseLL(head->next);
	head->next->next = head;
	head->next = NULL;
	return reversedHead;

}
