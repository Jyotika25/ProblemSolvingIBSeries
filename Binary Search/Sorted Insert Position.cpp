/*
Given a sorted array A and a target value B, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.
*/

int Solution::searchInsert(vector<int> &A, int target) {
    int n = A.size();
    
    int left =0;
    int right = n-1;
    int i=0;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(target==A[mid])
        return mid;
        else
        if(target>A[mid])
        left = mid+1;
        else
        right = mid-1;
    }
    
    return left;
}
