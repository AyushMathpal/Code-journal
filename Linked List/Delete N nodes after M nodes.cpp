Node* skipMdeleteN(Node  *head, int m,int n) {
    if(head==NULL ||head->next==NULL)return head;
    int k=0;
     Node*temp=head;
     while(k<m-1){
         temp=temp->next;
         k++;
     }
     
     while(true){
         if(temp->next==NULL){
            return head;
         }
         int i=0;
         while(i<n && temp->next!=NULL){
             temp->next=temp->next->next;
             i++;
         }
         int j=0;
         while(j<m && temp->next!=NULL){
             temp=temp->next;
             j++;
         }
         
     }
}  
