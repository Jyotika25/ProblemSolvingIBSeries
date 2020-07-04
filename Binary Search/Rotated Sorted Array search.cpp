
/*
Given an array of integers A of size N and an integer B.

array A is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2 ).

You are given a target value B to search. If found in the array, return its index, otherwise return -1.

You may assume no duplicate exists in the array.

NOTE:- Array A was sorted in non-decreasing order before rotation.
*/


int Solution::search(const vector<int> &A, int B) {
    
    unordered_map<long long int , long long int> m;
    
    for(int i=0;i<A.size();i++)
    {
        m[A[i]] = i;
    }
    
   // iterator it;
    
    if(m.find(B) == m.end())
    return -1;
    else
    return m[B];
}
