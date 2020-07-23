int Solution::canJump(vector<int> &A) {
    int pos=0;
    int n = A.size();
    for(int i=0;i<n;i++)
    {
        if(pos>=i)
            pos=max(pos,i+A[i]);
    }
    return (pos>=n-1);
}
