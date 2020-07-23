/*
Given an array of non-negative integers, A, of length N, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Return the minimum number of jumps required to reach the last index.

If it is not possible to reach the last index, return -1.
*/

int Solution::jump(vector<int> &A) {
    int i;
    int n=A.size();
    int mx=0, jump=1;
if(n<=1) return 0;

int temp;
temp=A[0];

for(i=0;i<n;i++){
if(i>mx)return -1;

if(i<=temp){
// dp[i]=count;
mx=max(mx,min(n-1,i+A[i]));
}
else{
jump++;
// dp[i]=count;
temp=mx;
mx=max(mx,min(n-1,i+A[i]));
}
}
return jump;
}
