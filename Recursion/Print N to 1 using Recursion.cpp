#include <iostream>
using namespace std;

int cnt=1;
void printNum(int n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    n--;
    printNum(n);
    
}    
int main()
{
    int n;
    cin>>n;
    printNum(n);
    return 0;
}
