//Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing 
//the stream sequentially O(1) times.

int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> B = A;
    for(int i=0;i<n;i++)
    {
        int index = abs(A[i])-1;
        if(B[index]<0){
        return index+1;
        }
        B[index] = B[index] * (-1);
    }
    return -1;
}
