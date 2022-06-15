int treeSum(Node<int>*root,int sum){
    if(root==NULL){
        return 0;
    }
    
    sum=treeSum(root->leftChild,sum)+root->data+treeSum(root->rightChild,sum);;
     
    return sum;
}
int sumofbinarytree(Node<int> *root){
    int sum=0;
     return treeSum(root,sum);
}
