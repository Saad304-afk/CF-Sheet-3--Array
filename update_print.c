/*You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.
Note: Index starts from 0.
Input Format : First line will contain N.Second line will contain the array A.Third line will contain X and V.
Constraints
1 <= N <= 10^5
1 <= A[i] <= 100 ; where A[i] are the values of array A.
0 <= X < N
1 <= V <= 100
Output Format :Output the final array in reverse order.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long n,i,sum=0,sum1=0,x,V;
    scanf("%ld",&n);
    long a[n];
    for(i=0;i<n;i++)
    {scanf("%ld",&a[i]);}
    scanf("%ld %ld",&x,&V);

      if(1<=V && V<=100 && 0<=x && x<n)
      { a[x]=V;}
      for(i=n-1;i>=0;i--)
      {  printf("%ld ",a[i]);}
}



