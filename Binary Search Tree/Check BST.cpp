bool helper(Node<int>*root,Node<int>*maximum,Node<int>*minimum){
     if(root==NULL){
        return true;
    }
    
    if(minimum!=NULL && root->data<minimum->data){
        return false;
    }
    if(maximum!=NULL && root->data>=maximum->data){
        return false;
    }
    bool leftAns=helper(root->leftChild,root,minimum);
    bool rightAns=helper(root->rightChild,maximum,root);
    return leftAns && rightAns;
}
bool isBST(Node<int>*root){
return helper(root,NULL,NULL);
   
}
