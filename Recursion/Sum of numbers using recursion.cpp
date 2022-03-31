//MY WAY
#include <iostream>
using namespace std;
int sum(int n, int i){
    if(i>n){
        return 0;
    }
    i=i+sum(n,i+1);
    
    
    return i;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n,0);
}

//METHOD 1-Parameterised Recursion

#include <bits/stdc++.h>
using namespace std;
void sum(int n,int i){
    if(i<1)
    {
      cout<<n;
      return;}
    sum(n+i,i-1);
}
int main(){
    int n;
  cin>>n;
  sum(0,n);
    return 0;
}

//METHOD 2-Functional Recursion
#include <iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    
    
    
    return n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}
