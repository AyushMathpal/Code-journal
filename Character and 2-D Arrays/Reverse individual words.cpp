#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(str[j]==' ' ){
                reverse(str.begin()+i,str.begin()+j);
                i=j;
                break;
            }
            else if(j==n-1){
                reverse(str.begin()+i,str.begin()+j+1);
                i=j;
                break;
            }
        }
        
    }
    cout<<str;
    return 0;
}
