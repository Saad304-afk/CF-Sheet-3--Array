/*Examples
InputCopy
3+2+1
OutputCopy
1+2+3
InputCopy
1+1+3+1+3
OutputCopy
1+1+1+3+3
InputCopy
2
OutputCopy
2*/
#include<bits/stdc++.h>
using namespace std;
int main()
{long i;
string n;
cin>>n;
 vector<long>a;
 for(i=0;i<n.size();i+=2)
    {a.push_back(n[i]-'0');}
     //cin>>a[i]>>'+';}
 sort(a.begin(),a.end());
 for(i=0;i< a.size();i++)
    {cout<<a[i];
    if(i!=a.size()-1)
     {cout<<"+";}
     }cout<<endl;
}
