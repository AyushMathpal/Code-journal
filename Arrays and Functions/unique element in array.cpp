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
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                
                cnt++;
                
            }
        }    
        if(cnt<=1){
            ans=arr[i];
            break;
            }
        else if(cnt>1){
            
            continue;
        }    
        
    }
    cout<<ans;
    return 0;
}
