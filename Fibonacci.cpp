/*#include<bits/stdc++.h>
using namespace std;
int main()
{ long long n,i;
  cin>>n;
  vector<long long>a(n);
 //int a=0,b=1;
 a[0]=0;
 a[1]=1;
  for( i=0;i<n;i++)
  { a[i]=a[i-1]+a[i-2] ;}
  cout<<a;

  }*/
#include <iostream>
using namespace std;
int main() {
    long long N;
    cin >> N;
    long long n = N - 1;
    long long a = 0, b = 1;
    if (n == 0) {
        cout << 0 << endl;
    } else if (n == 1) {
        cout << 1 << endl;
    } else {
        long long next,i;
        for ( i = 2; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        cout << b << endl;
    }

    return 0;
}
