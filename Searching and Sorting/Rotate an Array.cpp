#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
     
    int num=0;
    while(num<k){
        int temp=arr[0];
        for(int j=1;j<n;j++){
            arr[j-1]=arr[j];
            
        }
        arr[n-1]=temp;
        num++;
    }    
        
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}    
