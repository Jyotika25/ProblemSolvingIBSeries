//Find the contiguous subarray within an array, A of length N which has the largest sum.


int Solution::maxSubArray(const vector<int> &A) {
    
    int maxSum = A[0];
    int maxsofar = A[0];
    
    for(int i=1;i<A.size();i++)
    {
        maxsofar = max(maxsofar+A[i] , A[i]);
        if(maxsofar>maxSum)
        maxSum = maxsofar;
    }
    return maxSum;
}
