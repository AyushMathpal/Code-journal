#include <bits/stdc++.h>
using namespace std;

bool checkRedundancy(string A) {
    stack<char> st;
    for(int i = 0; i < A.size(); i++)
    {
    	char ch = A[i];
        if(ch == ')')
        {
            int cnt = 0;
            while(!st.empty() && st.top() != '(')
            {
                cnt++;
                st.pop();
            }
            st.pop();
            if(cnt < 2) return 1;
        }
        else st.push(ch);
    }
 
    return 0;
}

int main () {

	string input;
	cin >> input;

	if(checkRedundancy(input))
	{
		cout << "Yes" ;
	}
	else 
	{
		cout << "No" ;
	}

	return 0;
}
