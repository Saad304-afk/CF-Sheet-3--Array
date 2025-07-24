/*InputCopy
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
OutputCopy
word
l10n
i18n
p43s*/

#include<bits/stdc++.h>
using namespace std;
int main()
{ long n,i;
 string saad,s;
 cin>>n;
 vector<string>a(n);
 for(i=0;i<n;i++)
  {cin>>a[i];}
  //saad.length();
  for(i=0;i<n;i++)
  {if(a[i].length()>10)
  {cout<<a[i][0]<<a[i].length()-2<<a[i][a[i].length()-1]<<endl;}
  else
    cout<<a[i]<<endl;
}}
