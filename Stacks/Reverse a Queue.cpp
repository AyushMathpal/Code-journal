void reverseQueue(queue<int> &input) {
    if(input.empty())return;
    int top=input.front();
    input.pop();
    reverseQueue(input);
    input.push(top);
}
