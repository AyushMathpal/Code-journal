#include <iostream>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}   





int main()
{
    int n;
    cin>>n;
    if (n>=2){
        cout<<"2"<<" ";
    }
    for (int i=3;i<=n;i++){
        bool ans=prime(i);
        if (ans==true){
            cout<<i<<" ";
        }
    }    
    
    
    return 0;
}
