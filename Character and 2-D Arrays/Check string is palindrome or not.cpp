#include <bits/stdc++.h>

using namespace std;

int main(){
    string s="";
    cin>>s;
    string temp=s;
    reverse(s.begin(),s.end());
    if(temp==s){
        cout<<"Yes";
        
    }
    else{
        cout<<"No";
    }
    
    return 0;
}
