#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool num=false;
    for(int i=0;i<n;i++){
       
        for(int j=0;j<n;j++){
            int sum=arr[i]+arr[j];
            if(sum==x && j!=i){
                num=true;
                break;
            }
        }
        if (num==true){
            cout<<"Yes";
            break;
        }
    }    
    if(num==false){
        cout<<"No";
    }    
    
    
    
    
    return 0;
}    
