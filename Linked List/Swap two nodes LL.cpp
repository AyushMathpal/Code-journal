Node *swapNodes(Node *head, int i, int j)
{
    
    if(head==NULL || head->next==NULL ||j==i)return head;
    
    Node*temp=head;
    if(i==0 && j==1){
        Node*jthnode=head->next;
	    temp->next=temp->next->next;
	    jthnode->next=head;
	    return jthnode;
	}
    int count=0;
    Node*headLL=NULL;
    Node*ithnode=NULL;
    Node*midLL=NULL;
    Node*midLLtail=NULL;
    Node*jthnode=NULL;
    Node*tailLL=NULL;
    
	while(count<j+2 && temp!=NULL){
	    if(count==i-1 && i>=1){
	        headLL=temp;
	    }
	    if(count==i){
	        ithnode=temp;
	    }
	    if(count==i+1 && j-i>=2){
	        midLL=temp;
	    }
	    if(count==j-1 && j-i>=2){
	        midLLtail=temp;
	    }
	    if(count==j){
	        jthnode=temp;
	    }
	    if(count==j+1){
	        tailLL=temp;
	    }
	    temp=temp->next;
	    count++;
	}
	
	if(i==0){
	    jthnode->next=midLL;
        ithnode->next=tailLL;
        midLLtail->next=ithnode;
        return jthnode;
	}
	if(j-i==1){
	    headLL->next=jthnode;
	    jthnode->next=ithnode;
	    ithnode->next=tailLL;
	}
	else{
	     headLL->next=jthnode;
        jthnode->next=midLL;
        ithnode->next=tailLL;
        midLLtail->next=ithnode;
	}
   
    return head;
}
