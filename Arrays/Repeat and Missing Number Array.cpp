/*
You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4
*/


vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> b(A.size()+1,0);
    
    for(int i=0;i<A.size();i++){
        b[A[i]]++;
    }
    int a,c;
    for(int i=0;i<A.size()+1;i++){
        if(b[i]==2){
            a=i;
        }
        if(b[i]==0){
            c=i;
        }
    }
    vector<int> C;
    C.push_back(a);
    C.push_back(c);
    return C;
}
