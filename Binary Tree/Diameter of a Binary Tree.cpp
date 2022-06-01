int height(Node<int>*root){
    if(root==NULL)return 0;
    int l=height(root->leftChild);
    int r=height(root->rightChild);
    return(1+max(l,r));
}
int diameter(Node<int> *root){
    if(root==NULL)return 0;
    int leftDiameter=diameter(root->leftChild);
    int rightDiameter=diameter(root->rightChild);
    
    int rightHeight=height(root->rightChild);
    int leftHeight=height(root->leftChild);
    return max(leftDiameter,max(rightDiameter,rightHeight+leftHeight));
}
