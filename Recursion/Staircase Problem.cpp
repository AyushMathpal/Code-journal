#include <iostream>
using namespace std;
int Strcase(int n){
    if(n<=2){
        return n;
      
    }
    if (n==3){
        return 4;
    }    return Strcase(n-1)+Strcase(n-2)+Strcase(n-3);
    
    
}
int main()
{
    int n;
    cin>>n;
    cout<<Strcase(n);
    
    return 0;
    
}
