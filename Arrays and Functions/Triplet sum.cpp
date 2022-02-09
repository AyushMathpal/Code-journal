//MY APPROACH-BRUTE
#include<iostream>
using namespace std;

bool tripsum(int arr[],int n,int x){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for (int k=j+1;k<n;k++){
                
                if (arr[i]+arr[j]+arr[k]==x){
                    return 1;
                }
            }
        }
    }
    return 0;
}    

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=tripsum(arr,n,x);
    cout<<(ans ? "Yes":"No");
    return 0;
    
}


//MORE OPTIMISED
#include <bits/stdc++.h>
using namespace std;


bool checkTriplet(int A[], int n, int X)
{
    int l, r;
 
    /* Sort the elements */
    sort(A, A + n);
 
    /* Now fix the first element one by one and find the
       other two elements */
    for (int i = 0; i < n - 2; i++) {
 
        // To find the other two elements, start two index
        // variables from two corners of the array and move
        // them toward each other
        l = i + 1; // index of the first element in the
        // remaining elements
 
        r = n - 1; // index of the last element
        while (l < r) {
            if (A[i] + A[l] + A[r] == X) {
                return true;
            }
            else if (A[i] + A[l] + A[r] < X)
                l++;
            else // A[i] + A[l] + A[r] > X
                r--;
        }
    }
 
    // If we reach here, then no triplet was found
    return false;
}


int main () {

	int n,X;
	cin >> n >> X;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	bool ans = checkTriplet(arr, n, X);
	cout << (ans ? "Yes" : "No") ;

	return 0;
}
