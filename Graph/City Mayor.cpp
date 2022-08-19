int findMayor(int n, vector<vector<int>> &trust)
{
    vector<int>inDeg(n+1,0),outDeg(n+1,0);
    //write your code here

    
    for(auto itr:trust){
        inDeg[itr[1]]++;
        outDeg[itr[0]]++;
    }
    for(int i=1;i<=n;i++)
        if(inDeg[i]==n-1 && outDeg[i]==0)
            return i;
    return -1;
}
