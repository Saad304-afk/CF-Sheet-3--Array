//Descending Order
#include<bits/stdc++.h>
using namespace std;
int main()
{ long n,i;
cin>>n;
vector<long>a(n);
for(i=0;i<n;i++)
{ cin>>a[i];}
sort(a.begin(),a.end(),greater<long>());
for(i=0;i<n;i++)
{cout<<a[i]<<" ";}
cout<<endl;

}
