/*Cube is given an integer n. She wants to know how many ordered pairs of positive integers (a,b)
 there are such that a=n−b. Since Cube is not very good at math, please help her!
Input
The first line contains an integer t
 (1≤t≤99) — the number of test cases.
The only line of each test case contains an integer n
 (2≤n≤100).
Output
For each test case, output the number of ordered pairs (a,b)
 on a new line.

Example
InputCopy
3
2
4
6
OutputCopy
1
3
5*/

#include<bits/stdc++.h>
using namespace std;
int main()
{ long n,i;
cin>>n;
vector<long>a(n);
for(i=0;i<n;i++)
{cin>>a[i];}
for(i=0;i<n;i++)
{
 cout<<a[i]-1<<endl;
}
}
