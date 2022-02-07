#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int c=a;
    int b;
    cin>>b;
    for(int i=1;i<b;i++){
        a=a*c;
    }
    cout<<a;
    return 0;
}
