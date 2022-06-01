
int height(Node<int>*root){
    if(root==NULL){
        return -1;
    }
    int leftHeight=height(root->leftChild);
    int rightHeight=height(root->rightChild);
    return (1+max(leftHeight,rightHeight));
}
