/*Given a number N and two arrays A,B of N numbers. Determine if B is a permutation of A
 or not.
Note: A permutation is an arrangement of all or part of a set of objects.
For example: The array [2, 1, 3], [3, 2, 1] and [2, 3, 1] are permutation of the array [1, 2, 3].
Input:
5
5 1 1 9 3
1 9 1 5 3
Output:
yes*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ long long n,i,j,sum=1,sum1=1;
cin>>n;
vector<long long>a(n),b(n);
for(i=0;i<n;i++)
{ cin>>a[i];}
  // sum*=a[i];}
for(i=0;i<n;i++)
 {cin>>b[i];}
  //sum1*=a[j];}
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  if(a==b)
    {cout<< "yes\n";}
    else
    {cout<<"no\n";}
}
