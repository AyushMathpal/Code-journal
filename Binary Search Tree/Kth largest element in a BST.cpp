void help(Node<int>* root , vector<int> &v){
	if(root == NULL)
	     return;

    help(root->leftChild, v);
    v.push_back(root->data);
    help(root->rightChild, v);
}
int klargestelement(Node<int>* root, int k)
{
	vector<int> v;
	help(root, v);
	int a = v[v.size()-k];
	return a;
}
