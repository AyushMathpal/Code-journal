#include <bits/stdc++.h>
using namespace std;
void Digitsum(int num,int sum){
    if(num==0){
        cout<<sum;
        return;
    }
    sum=sum+num%10;
    Digitsum(num/10,sum);
}
int main(){
    int n;
    cin>>n;
    Digitsum(n,0);
    return 0;
}
