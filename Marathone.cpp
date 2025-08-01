#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,i,b,c,d,l,coun=0,c1=0,t1=0,t2=0,t3=0,c2=0;
 cin>>n;
 vector<int>a(n);
 while(n--)
 { int n,i,b,c,d,l,coun=0;
        cin >>l>>b>>c>>d ;
     /*if(a<b)
      {coun++;}
      else if(a<c)
      {coun++;}
     else if(a<d)
        {coun++;}
     else
        {cout<<0;}
        cout<<coun;*/
    if(l<b)
      coun++;
     if(l<c)
        coun++;
     if(l<d)
        coun++;

     cout<< coun <<endl;}

       /*if(a<b )
      {coun++;

       if(a<c)
      {coun+=coun;}
     else if(a<d)
        {coun+=coun;;}
     else
        {cout<<0;}*/
        //cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;}

        //cout<<coun;

}




