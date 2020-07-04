/*
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

Note that if you end up using an additional array, you will only receive partial score.
*/

void Solution::rotate(vector<vector<int> > &A) {
    
    //original
    int n = A.size();
    int m = A[0].size();
    //transpose
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i<j)
            {
                int temp = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = temp;
            }
        }
    }
    
    //reverse
    for(int i=0;i<n;i++)
    {
        reverse(A[i].begin() , A[i].end());
    }
}
