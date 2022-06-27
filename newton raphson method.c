#include<stdio.h>
#include<math.h>
#include<conio.h>
#define e 0.001
#define f(x) x*x-17
#define df(x) 2*x
void main()
{
    int i;
    float x0, x1, f0, f1, df0;
     printf("enter the value of x0:");
    scanf("%f",&x0);
    do
    {
        f0=f(x0);
        df0=df(x0);
        f1=f(x1);
        x1=x0-(f0/df0);
        x0=x1;
        i++;
        printf("iterations: %d roots: %f function value: %f\n",i,x1,f1);
    }
        while(fabs(f1)>e);
        getch();
}
