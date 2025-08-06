#include<bits/stdc++.h>
using namespace std;
int main()
{ long long m,n,i;
  cin>>m>>n;
  long long a[m][n];
  int coun=0;

  for(i=0;i<m;i++)
  {
      for(long j=0;j<n;j++)
      { char c;
      cin>>c;
        if(c=='x')
        {
            coun++;
        }

      }
  }
  cout<<coun<<endl;


}





