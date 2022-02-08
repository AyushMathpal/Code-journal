#include <iostream>
using namespace std;
int main()
{
    int n;
    int x;
    
    cin>>n;
    cin>>x;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<i;
            cnt=1;
            break;
        }
    }
    if(cnt==0){
        cout<<"-1";
    }
    
    
    
   
    return 0;
}
