#include <bits/stdc++.h>
using namespace std;
void RevString(string &s,int i){
    if(i>=s.size()-i-1){
        cout<<s;
        return;
    }
    swap(s[i],s[s.size()-i-1]);
    RevString(s,i+1);
}
int main()
{
    string s;
    cin>>s;
    RevString(s,0);
    return 0;
}
