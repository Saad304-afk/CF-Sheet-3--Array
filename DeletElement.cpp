/*Test case:
Input: 5
       10 20 30 40 50
       1
Output:10 30 40 50*/

#include<bits/stdc++.h>
using namespace std;
int main()
{long n,i;
cin>>n;
 vector<long>a(n);
 for(i=0;i<n;i++)
 {cin>>a[i];}
 int idx;
 cin>>idx;
 for(i=idx;i<=n;i++)
 {a[i]=a[i+1];}
 for(i=0;i<n-1;i++)
 {cout<<a[i]<<" ";}

}
