pair<int, int> getMinAndMax(Node<int> *root){
    
     //Base Condition 
    if(root==NULL){
        pair<int,int>init;
        init.first=INT_MAX;
        init.second=INT_MIN;
      return init;
    }
    
    pair<int,int>ans;
    ans.first=root->data;
    ans.second=root->data;
     
     pair<int,int>leftAns;
     pair<int,int>rightAns;
     
     
     leftAns=getMinAndMax(root->leftChild);
     ans.first=min(ans.first,leftAns.first);
     ans.second=max(ans.second,leftAns.second);
     
     
     rightAns=getMinAndMax(root->rightChild);
     ans.first=min(ans.first,rightAns.first);
     ans.second=max(ans.second,rightAns.second);
     
     return ans;
} 
