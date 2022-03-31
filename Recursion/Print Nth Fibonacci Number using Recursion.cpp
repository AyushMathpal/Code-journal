#include <iostream>
using namespace std;
int Fibonum(int n){
    if(n<=1){
        return n;
    }
    int s1=Fibonum(n-1);
    return s1 +Fibonum(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout << Fibonum(n);
    return 0;
}
