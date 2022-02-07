//SUM OF EVEN NUMBERS TILL N


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}

//SUM OF ODD NUMBERS TILL N
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i=i+2){
        sum=sum+i;
        
    }
    cout<<sum;
    return 0;
}
