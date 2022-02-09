//With  STL Functions
#include <iostream>
#include <bits/stdc++.h>
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
        
        
      
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
//Without STL
#include <bits/stdc++.h>
using namespace std;

void segregate0and1(int arr[], int size)
{
    /* Initialize left and right indexes */
    int left = 0, right = size-1;
 
    while (left < right)
    {
        /* Increment left index while we see 0 at left */
        while (arr[left] == 0 && left < right)
            left++;
 
        /* Decrement right index while we see 1 at right */
        while (arr[right] == 1 && left < right)
            right--;
 
        /* If left is smaller than right then there is a 1 at left
        and a 0 at right. Exchange arr[left] and arr[right]*/
        if (left < right)
        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main () {

	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	segregate0and1(arr, n);

	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
