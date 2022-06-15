void mirrorBinaryTree(Node<int>* root){
    if(root==NULL)return;
    mirrorBinaryTree(root->leftChild);
    Node<int>*storeLeft=root->leftChild;
    root->leftChild=root->rightChild;
    root->rightChild=storeLeft;
     mirrorBinaryTree(root->leftChild);
}
