/*Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.
Input
First line contains a number N (2≤N≤1000) number of elements.Second line contains N numbers (-105  ≤  Ai  ≤  105).
it's guaranteed that there is at least one number in array less than or equal to 10.
Output
For each number in the array that is equal to or less than 10 print a single line contains "A[i] = X", where i is the position in the array and X is the number stored in the position.
Example
InputCopy
5
1 2 100 0 30
OutputCopy
A[0] = 1
A[1] = 2
A[3] = 0*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ long long n,i,j;
  cin>>n;
  vector<long long>a(n);
  for(i=0;i<n;i++)
  { cin>>a[i];}
  for(i=0;i<n;i++)
   { if(a[i]<=10)
       {cout<<"A["<<i<<"] = "<<a[i]<<endl;
       }}
       //cout<<endl;}
}



