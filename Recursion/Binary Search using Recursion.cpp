#include <bits/stdc++.h>
using namespace std;
void BinarySearch(int arr[],int mid,int start, int end,int k){
    mid=start+(end-start)/2;
    if(start>=end){
        if(arr[mid]==k){
            cout<<"Found";
            return;
        }
        cout<<"Not Found";
        return;
    }
    
    if(arr[mid]>k){
        BinarySearch(arr,mid,start,mid-1,k);
    }
    if(arr[mid]<k){
        BinarySearch(arr,mid,mid+1,end,k);
    }
    if(arr[mid]==k){
        cout<<"Found";
        return;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BinarySearch(arr,0,0,n-1,k);
    
   
    return 0;
}
