// A 
// B C 
// D E F 
// G H I J 
// K L M N O

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0; 
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            
            cout<<char('A'+cnt)<<" ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}
