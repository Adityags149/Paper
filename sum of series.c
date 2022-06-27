#include <stdio.h>
void main()
{
    int i=0,n;
   double sum=0.0;
    printf ("enter the value of n:");
    scanf ("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+((double)1/(double)i);
    printf("sum of the series is %lf\n",sum);
}
