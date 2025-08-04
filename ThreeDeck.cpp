/*Monocarp placed three decks of cards in a row on the table. The first deck consists of a
cards, the second deck consists of b cards, and the third deck consists of c
cards, with the condition a<b<c.Monocarp wants to take some number of cards (at least one, but no more than c) from the third deck and distribute them between the first two decks so that each of the taken cards ends up in either the first or the second deck. It is possible that all the cards taken from the third deck will go into the same deck.
Your task is to determine whether Monocarp can make the number of cards in all three decks equal using the described operation.
Input
The first line contains a single integer t
 (1≤t≤10^4) — the number of test cases.
The only line of each test case contains three integers a,b, and c
 (1≤a,b,c≤10^8) — the number of cards in the first, second, and third decks, respectively.
Additional constraint on the input: a<b<c.Output
For each test case, output "YES" (without quotes) if Monocarp can make the number of cards in all three decks equal using the described operation. Otherwise, output "NO" (without quotes).
Example
InputCopy
4
3 5 10
12 20 30
3 5 7
1 5 6
OutputCopy
YES
NO
YES
NO*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    vector<long long >p(n);
    for(i=0; i<n; i++)
    {
        long long a,b,c,sum;
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum%3!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long long avg =sum/3;
        long long ache =c-avg;
        if(b>avg)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ache=ache-(avg-c);
        if(a>ache)
           {cout<<"NO"<<endl;
            continue;}
           a=a+ache;
           if(a!=avg)
           {
               cout<<"NO"<<endl;
               continue;
           }
           cout<<"YES"<<endl;
    return 0;}
}










