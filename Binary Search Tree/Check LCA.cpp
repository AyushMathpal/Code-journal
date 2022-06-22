int LCAofBST(Node<int>*root , int n1, int n2){


    if(root == NULL){
        return -1;
    }

    if(root->data > n1 && root->data > n2){

        return LCAofBST(root->leftChild , n1, n2);
    } 
    else if(root->data < n1 && root->data < n2){

        return LCAofBST(root->rightChild, n1, n2);
    }
    else{

        return root->data;
    }
}
