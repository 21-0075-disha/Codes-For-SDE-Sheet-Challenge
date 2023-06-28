int longestSubSeg(vector<int> &arr , int n, int k){
    int i=0,ans=0,j=0,cnt0=0,cnt1=0;
    while(j<n)
    {
        while(j<n && cnt0<=k)
        {
            if(arr[j]==0)cnt0++;
            if(cnt0>k) break;
            j++;
        }
        ans=max(ans,j-i);
        while(i<=j && cnt0>k)
        {
            if(arr[i]==0)cnt0--;
            if(cnt0<=k) break;
            i++;
        }
        j++;
        i++;
    }
    return ans;
}
