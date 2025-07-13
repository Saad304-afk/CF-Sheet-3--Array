#include<bits/stdc++.h>
using namespace std;
int main()
{ long n,sum=0,i;
cin>>n;
string s;
cin>>s;
vector<long long>a(n);
  for(i=0;i<n;i++)
  {a[i]=s[i]-'0';
   sum+=a[i]; }
   cout<<sum;}
  /*for(i=1;i<=n;i++)
  {cout<<sum;}}*/
