#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n,i;
    scanf("%ld",&n);
    long a[n];
    for(i=0;i<n;i++)
    { scanf("%ld",&a[i]);}
    if(n%2==0){
    for(i=n-1;i>=0;i=i-2)
    { printf("%ld ",a[i]);}}

     else if(n%2!=0){
    for(i=n-2;i>=0;i=i-2)
    { printf("%ld ",a[i]);}}
}
