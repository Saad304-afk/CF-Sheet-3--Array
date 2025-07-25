/*Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.
Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.
Output
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

Examples
InputCopy
5
2 4 7 8 10
OutputCopy
3
InputCopy
4
1 2 1 1
OutputCopy
2*/

#include<bits/stdc++.h>
using namespace std;
int main()
{ long n,i,num,coun=0,odd=0;
 cin>>n;
 vector<long>a(n);
for(i=0;i<n;i++)
{cin>>a[i];}
//bool ret=false;
 int epos=0,opos=0;
for(i=0;i<n;i++)
   {//num=n/2;
   if(a[i]%2==0)
    {coun++;
     epos=i+1;}
      //ret=true;
     //if(true)
     else
        {odd++;
         opos=i+1;}  }

    if(coun==1)
      {cout<<epos;}
    else
        {cout<<opos;}



 }


