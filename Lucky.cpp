/*A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

Input
The first line of the input contains an integer t
 (1≤t≤103
) — the number of testcases.

The description of each test consists of one line containing one string consisting of six digits.

Output
Output t
 lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
InputCopy
5
213132
973894
045207
000000
055776
OutputCopy
YES
NO
YES
YES
NO
Note
In the first test case, the sum of the first three digits is 2+1+3=6
and the sum of the last three digits is 1+3+2=6,they are equal so the answer is "YES".*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{ long t;
  cin>>t;
  while(t--)
  { string n;
    cin>>n;
    if(n[0]+n[1]+n[2]==n[3]+n[4]+n[5])
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }

}
