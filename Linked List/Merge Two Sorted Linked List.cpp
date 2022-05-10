//O(N^2)--->BUBBLE SORT ALGO
void sortlist(Node* head1)
{
    Node* curr = head1;
    Node* temp = head1;
 
    
    while (curr->next != NULL) {
 
        temp = curr->next;
        while (temp != NULL) {
 
            if (temp->data < curr->data) {
                int t = temp->data;
                temp->data = curr->data;
                curr->data = t;
            }
            temp = temp->next;
        }
        curr = curr->next;
    }
}

Node* mergeSortedLinkedList(Node* head1, Node* head2){
    if(head1==NULL )return head2;
    if(head2==NULL )return head1;
    Node*tail1=head1;
    while(tail1->next!=NULL){
        tail1=tail1->next;
    }
    tail1->next=head2;
    Node*temp=head1;
   
    sortlist(head1);
    
    return head1; 
}



O(N)---->RECURSIVE SOLUTION
Node* mergeSortedLinkedList(Node* head1, Node*head2){

	Node* finalList = NULL;
     
    /* Base cases */
    if (head1 == NULL)
        return head2;
    else if (head2 == NULL)
        return head1;
     
    /* Pick either head1 or head2, and recur */
    if (head1->data <= head2->data)
    {
        finalList = head1;
        finalList->next = mergeSortedLinkedList(head1->next, head2);
    }
    else
    {
        finalList = head2;
        finalList->next = mergeSortedLinkedList(head1, head2->next);
    }
    return finalList;
}
