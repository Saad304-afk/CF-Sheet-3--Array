/*test case:  input:5
                    10 20 30 40 50
                    1 100
            Output :10 100 20 30 40 50*/

#include<bits/stdc++.h>
using namespace std;
int main()
{ long n,i;
  cin>>n;
  vector<long>a(n+1);
  for(i=0;i<n;i++)
  {cin>>a[i];}
  int idx,val;
  cin>>idx>>val;
  for(i=n;i>=(idx+1);i--)
  {a[i]=a[i-1];}
  a[idx]=val;
   for(i=0;i<=n;i++)
   {cout<<a[i]<<" ";}



}


