/*
Given a collection of intervals, merge all overlapping intervals.

For example:

Given [1,3],[2,6],[8,10],[15,18],

return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.
*/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
vector<Interval> Solution::merge(vector<Interval> &A) {
if(A.size()<2)
return A;

sort(A.begin(),A.end(),[](Interval a,Interval b){
    return a.start<b.start ;});

vector<Interval> res;

res.push_back(A[0]);

for(int i=1;i<A.size();i++)
{
    if(res.back().end<A[i].start) 
    res.push_back(A[i]);
    else
    res.back().end=max(res.back().end,A[i].end);
}

    return res;
}
