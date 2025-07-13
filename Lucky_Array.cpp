/*Given a number N and an array A of N numbers. Determine if the array is lucky or not.
Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.Second line contains N numbers (-10^5≤Ai≤10^5).
Output
Print "Lucky" (without quotes) if the frequency of the minimum element is odd, otherwise print "Unlucky"(without quotes).
Examples
InputCopy
5
8 8 9 5 9
OutputCopy
Lucky
InputCopy
5
3 3 3 5 3
OutputCopy
Unlucky*/
#include<bits/stdc++.h>
using namespace std ;
int main()
{ long long n,i,coun=0;
 cin>>n;
 vector<long long>a(n);
 for(i=0;i<n;i++)
 {cin>>a[i];}
 int mval=a[0];
 for(i=0;i<n;i++)
 {if(a[i]<mval)
    {mval=a[i];}}
  for(i=0;i<n;i++)
  {if(a[i]==mval)
  {coun++;}}
  if(coun%2==0)
  {cout<<"Unlucky";}
  else
  {cout<<"Lucky";}

}



