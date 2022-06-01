void preOrder(Node<int> *root){
   if(root==NULL)return;
   
   
   preOrder(root->leftChild);
   preOrder(root->rightChild);
   cout<<root->data<<" ";
}
