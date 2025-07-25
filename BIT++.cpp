/*InputCopy
1
++X
OutputCopy
1
InputCopy
2
X++
--X
OutputCopy
0*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{long n,i,sum=0;
 cin>>n;
 char a[100];
 while(n--)
 {cin>>a;
   if(a[1]=='+')
   {sum++;}
   else
   {sum--;}}
  cout<<sum<<endl;
}
