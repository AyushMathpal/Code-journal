#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100006];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}
