#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{
    // Your code here
    stack<char >st;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '{' || s[i] == '[' || s[i] == '(')st.push(s[i]);
        else
        {
            if(st.size() == 0)return 0;
            if(s[i] == '}' && st.top() != '{')return 0;
            else if(s[i] == ']' && st.top() != '[')return 0;
            else if(s[i] == ')' && st.top() != '(')return 0;
            
            st.pop();
        }
    }
    return st.size() == 0;
}

int main () {

	string input;
	cin >> input;

	if(isBalanced(input))
	{
		cout << "Balanced";
	}
	else
	{
		cout << "Not Balanced";
	}

	return 0;
}
