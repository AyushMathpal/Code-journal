#include <iostream>
using namespace std;
int sumArr(int arr[],int n,int sum){
    if(n<0){
        return sum;
    }
    sum=sum+arr[n];
    return sumArr(arr,n-1,sum);
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumArr(arr,n-1,0);
    return 0;
}
