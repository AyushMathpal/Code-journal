pair<int, int > twoSum(int arr[], int n, int k)
{
	map<int , int > m ;
    pair<int, int > ans ;
    for(int i=0;i < n;i++)
    {
        if(m.count(k - arr[i]))
        {
            ans.first = (m[k-arr[i]] + 1);
            ans.second = (i +1);
            return ans ;
        }
        else
        {
            if(!m.count(arr[i]))
            m[arr[i]]=i; 
        }
    }
    return ans ;
}
