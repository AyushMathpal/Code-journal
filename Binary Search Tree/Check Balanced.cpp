
pair<bool,int>helper(Node<int>*root){
    
    
    if(root == NULL){
        
        pair<bool,int>ans;
        ans.first = true;
        ans.second = -1;
        
        return ans;
    }
    
    pair<bool,int>leftAns = helper(root->leftChild);
    pair<bool,int>rightAns = helper(root->rightChild);
    
    pair<bool,int>finalAns;
    
    finalAns.second = 1 + max(leftAns.second,rightAns.second);
    finalAns.first = abs(leftAns.second - rightAns.second) <=1 && leftAns.first && rightAns.first;
    
    return finalAns;
}
bool isBalanced(Node<int> *root){
     //write your code here
     
     pair<bool,int>ans = helper(root);
     
     return ans.first;
} 
