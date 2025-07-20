/*input : 5
          10 1 20 30 40
 output : 10 40 20 30 1*/

#include<bits/stdc++.h>
using namespace std;
int main()
{long long n,i;
 cin>>n;
 vector<long long>a(n);
 long minipo=0,maxipo=0,po,po1;
 long long mini=LLONG_MAX,maxi=LLONG_MIN;
 for(i=0;i<n;i++)
 {cin>>a[i];
 //long mini,minipo,maxi,maxipo,po,po1;
  if(mini>a[i])
   {mini=a[i];
    minipo=i;}
   if(maxi<a[i])
   {maxi=a[i];
    maxipo=i;}
   }
 //cout<<po<<po1;
 swap(a[minipo],a[maxipo]);
 //cout<<po<<po1;}
 for(i=0;i<n;i++)
 {cout<<a[i]<<" ";}}
