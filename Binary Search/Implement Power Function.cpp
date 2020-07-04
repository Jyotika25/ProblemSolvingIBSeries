/*
Implement pow(x, n) % d.

In other words, given x, n and d,

find (x^n % d)
*/

int Solution::pow(int x, int n, int d) 
{
    long long ans;

    if(x==0)
    return 0;
    if(n==0)
    return 1;

    long long temp = pow(x,n/2,d);
    
    if(n%2==0)//even
    {
    ans = ((temp%d)*(temp%d))%d;
    }

    else//odd
    {
    ans = ((((x%d)*(temp%d))%d)*(temp%d))%d;
    }

    if (ans>=0)
    return ans%d;

    else{
    ans = (ans%d)+d;
    ans = ans%d;

return ans;
}
}
