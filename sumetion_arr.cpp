/*Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
absolute value : means to remove any negative sign in front of a number .
EX : |-5| = 5 , |7| = 7
Input:First line contains a number N (1≤N≤10^5) number of elements.
Second line contains N numbers (-10^9 ≤ Ai ≤ 10^9).*/
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{long long  n,sum=0,i;
cin>>n;
//int a[n];
vector<long long>a(n);
for( i=0;i<n;i++)
{cin>>a[i];}

for(i=0;i<n;i++)
{ sum+=a[i];}
cout<< llabs(sum);
}
