#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(arr[i]<max){
            v.push_back(arr[i]);
        }
    }
    if(v.size()==0){
        cout<<"-1";
    }
    
    else{
        cout<<v[v.size()-1];
    }    
    return 0;
}
