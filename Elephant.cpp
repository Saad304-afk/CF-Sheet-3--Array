/*An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.
Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.
Output
Print the minimum number of steps that elephant needs to make to get from point 0 to point x.
InputCopy
5
OutputCopy
1
InputCopy
12
OutputCopy
3*/

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,x;
 cin>>n;
 x=n/5;
 if(n==1||n==2||n==3||n==4||n==5)
 {cout<<1;}
 else if(n%5==0)
 {
   cout<<x;
 }
  else
      {cout<<x+1;}
}
