/*Given multiple lines each line contains two numbers N and M.
For each line print a single line contains:
The numbers between N and M inclusive separated by single space.The message " sum =".
The summation of all numbers between N and M inclusive.
Note: The program should be TERMINATED as soon as any of these two numbers is less than or equal to zero and don't print any thing.
For more clarification see the examples below.
Input
The input contains multiple line.
Each line contains two numbers N and M (-100 ≤ N, M ≤ 100).
It's guaranteed that the last line of the input will contain a number that is less than or equal to zero.

Output
For each line print the answer according to the required above in a single line.
Examples
InputCopy
5 2
5 7
5 -1
OutputCopy
2 3 4 5 sum =14
5 6 7 sum =18*/
#include<iostream>
using namespace std;
int main()
{int n,m,i;
    while(cin>>n>>m)
    { int sum=0;
        if(m<=0 || n<=0)
       {break;}
      for(i=min(n,m);i<=max(n,m);i++)
      { cout<<i<<" ";
          sum=sum+i;}
      cout<<"sum"<<" "<<"="<<sum<<endl;

    }
}



