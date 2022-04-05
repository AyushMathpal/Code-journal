#include <iostream>
using namespace std;
int Powx(int x,int n,int product){
    if(n==0){
        return product;
    }
    product=x*Powx(x,n-1,product);
    return product;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<Powx(x,n,1);
    return 0;
}
