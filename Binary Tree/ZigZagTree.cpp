
void zizagtraversal(Node<int>* root)
{
    // if null then return
    if (!root)
        return;
 
    // declare two stacks
    stack<Node<int>*> currentlevel;
    stack<Node<int>*> nextlevel;
 
    // push the root
    currentlevel.push(root);
 
    // check if stack is empty  
  #WATCHED SOLUTION  
  bool lefttoright = true;
    while (!currentlevel.empty()) {
 
        // pop out of stack
         Node<int>* temp = currentlevel.top();
        currentlevel.pop();
 
        // if not null
        if (temp) {
 
            // print the data in it
            cout << temp->data << " ";
 
            // store data according to current
            // order.
            if (lefttoright) {
                if (temp->leftChild)
                    nextlevel.push(temp->leftChild);
                if (temp->rightChild)
                    nextlevel.push(temp->rightChild);
            }
            else {
                if (temp->rightChild)
                    nextlevel.push(temp->rightChild);
                if (temp->leftChild)
                    nextlevel.push(temp->leftChild);
            }
        }
 
        if (currentlevel.empty()) {
            lefttoright = !lefttoright;
            swap(currentlevel, nextlevel);
        }
    }
}
