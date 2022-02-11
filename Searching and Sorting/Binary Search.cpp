#include <iostream>
using namespace std;
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
    
    int start=0;
    int end=n-1;
    
    bool chk=false;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else{
            chk=true;
            cout<<"Found";
            break;
        }
    }
    if (chk==false){
        cout<<"Not Found";
    }
    return 0;
}
