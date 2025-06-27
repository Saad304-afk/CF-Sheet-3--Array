#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{int n,sum=0,i;
cin>>n;
//int a[n];
vector<int>a(n);
for( i=1;i<=n;i++)
{cin>>a[i];}

for(int i=1;i<=n;i++)
{ sum+=a[i];}
cout<< abs(sum);
}
