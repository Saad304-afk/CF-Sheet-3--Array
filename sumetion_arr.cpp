#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{long long n,sum=0,i;
cin>>n;
//int a[n];
vector<long long>a(n);
for( i=1;i<=n;i++)
{cin>>a[i];}

for(int i=1;i<=n;i++)
{ sum+=a[i];}
cout<< llabs(sum);
}
