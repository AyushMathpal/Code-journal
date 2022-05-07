//MY SOLUTION
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
int lengthLL(Node*head){
    int cnt=0;
    while(head!=NULL){
        head=head->next;
        cnt++;
    }
    return cnt;
}    

Node*middleNode(Node*temp,int length){
    int mid=(length-1)/2;
    while(mid!=0){
        temp=temp->next;
        mid--;
    }
    return temp;
}
bool isPalindrome(Node *head)
{
    if(head==NULL){
        return 1;
    }
    if(head->next==NULL){
        return 1;
    }
    int len=lengthLL(head);
    
    Node*mid=middleNode(head,len);
   
    Node*temp=mid->next;
    mid->next=NULL;
    
 
    mid=reverseLL(head);
    
    Node*secLLtemp=temp;
    while(secLLtemp!=NULL){
        if(mid->data!=secLLtemp->data){
            return 0;
        }
        mid=mid->next;
        secLLtemp=secLLtemp->next;
    }
    return 1;
}
//FROM SUBMISSION
Node*reverse(Node*head){
        
        if(!head || !head->next)return head;
        
        Node*temp = reverse(head->next);
        
        head->next->next = head;
        head->next = NULL;
        return temp;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        
        if(!head || !head->next)return true;
        
        
        Node*temp = head;
        
        Node*slow = head;
        Node*fast = head->next;
        Node*prev = NULL;
        
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        Node*nextList = slow->next;
        slow->next=NULL;

        slow->next = reverse(nextList);
  
       fast = head;
        slow = slow->next;
        
        while(slow){
            if(slow->data!=fast->data)return false;
            slow = slow->next;
            fast = fast->next;
        }
        return true;
        
        
    }
