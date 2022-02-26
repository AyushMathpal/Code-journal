#include <bits/stdc++.h>
using namespace std;
void prntsubstr(string str,int n){
    for(int len=1;len<=n;len++){
        for(int i=0;i<n;i++){
            if(n-i>=len){
                cout<<str.substr(i,len)<<endl;
            }    
        }
    }
    
}
int main(){
    string str;
    getline(cin,str);
    int n;
    n=str.length();
    
    prntsubstr(str,n);
    return 0;
}
