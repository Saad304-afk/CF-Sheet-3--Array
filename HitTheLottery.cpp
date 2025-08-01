/*Allen has a LOT of money. He has n
dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100. What is the minimum number of bills Allen could receive after withdrawing his entire balance?
Input
The first and only line of input contains a single integer n
(1≤n≤109).
Output
Output the minimum number of bills that Allen could receive.

Examples
InputCopy
125
OutputCopy
3
InputCopy
43
OutputCopy
5
InputCopy
1000000000
OutputCopy
10000000*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,sum=0;
    cin>>n;
    int saad[]= {100,20,10,5,1};
    i=0;
    while(n!=0)
    {
        sum+=n/saad[i];
        n%=saad[i];
        i++;
    }
    cout<<sum;
    return 0;
}



