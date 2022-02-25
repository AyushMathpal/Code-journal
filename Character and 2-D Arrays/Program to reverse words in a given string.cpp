#include <bits/stdc++.h>
using namespace std;
void RevWord(string str,int n){
    reverse(str.begin(),str.end());
    
    for(int i=0;i<n;i++){
        
        
        for(int j=i;j<n;j++){
            if(str[j]==' ' ){
                reverse(str.begin()+i,str.begin()+j);
                i=j;
                break;
            }
            if(j==n-1){
                reverse(str.begin()+i,str.begin()+n);
                i=j;
                break;
            }
        }
        
    }
   cout<<str;
    
}
int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    RevWord(str,n);
   
    return 0;
}
