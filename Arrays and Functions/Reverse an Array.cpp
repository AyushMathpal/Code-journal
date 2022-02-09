#include <iostream>
using namespace std;
void revArr(int arr[],int n){
    int start=0;
    int end=n-1;
    int num;
    while(start<end){
        num=arr[start];
        arr[start]=arr[end];
        arr[end]=num;
        start++;
        end--;
    }
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    revArr(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        
    
    return 0;
}
