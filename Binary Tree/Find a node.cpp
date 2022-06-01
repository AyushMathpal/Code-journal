bool isPresent(Node<int>*root , int x){
	if(!root) return false;
	if(root->data == x) return true;
	
	
    return (isPresent(root->leftChild , x)||isPresent(root->rightChild , x));
}
