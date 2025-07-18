/*You are given an integer x. You need to find the smallest non-negative integer y such that the numbers x
and y share at least one common digit. In other words, there must exist a decimal digit d that appears in both the representation of the number x and the number y.
Input
The first line contains an integer t
 (1≤t≤1000) — the number of test cases.
The first line of each test case contains one integer x
 (1≤x≤1000).
Output
For each test case, output one integer y
 — the minimum non-negative number that satisfies the condition.
Example
InputCopy
5
6
96
78
122
696
OutputCopy
6
6
7
1
6*/

#include<bits/stdc++.h>
using namespace std;
int main()
{ long long n,i;
 cin>>n;
 //long long mini;
 vector<long long>a(n);
 for(i=0;i<n;i++)
    {cin>>a[i];
    long long dig;
    long long mini=9;
    while(a[i]>0)
    {dig = a[i]%10;
     if(dig<mini)
      {mini=dig;}
    a[i]= a[i]/10;}
cout<<mini<<endl;

}}
