#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        bool num=false;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && j!=i){
                ans=arr[i];
            }
        
        
        }    
    }
    cout<<ans;
    return 0;
}
