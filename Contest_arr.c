/*You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.
Input Format :First line will contain N.Second line will contain N values named V.
Constraints
1 <= N <= 10^5
-1000 <= V <= 1000
Output Format:Output the sum of positive numbers first, then sum of negative numbers.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long n,i,sum=0,sum1=0;
    scanf("%ld",&n);
    long a[n];
    for(i=0;i<n;i++)
    {scanf("%ld",&a[i]);}

    //f(i>0)
    for(i=0;i<n;i++)
    { if(a[i]>0)
       {sum=sum+a[i];}
         //printf("%ld",sum);}

       else if(a[i]<0)
       {sum1=sum1+a[i];}
       }

        printf("%ld %ld",sum,sum1);
        }

