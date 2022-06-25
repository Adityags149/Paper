#include<stdio.h>
#include<math.h>
#include<conio.h>
#define e 0.001
#define f(x) x*x-2*x-17
void main()
{
    int i;
    float x0, x1, x2, f0, f1, f2;
     printf("enter the value of x0 & x1:");
    scanf("%f%f",&x0,&x1);
    do
    {
        f0=f(x0);
        f1=f(x1);
        f2=f(x2);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        x0=x1;
        x1=x2;
        f0=f1;
        f1=f2;
        i++;
        printf("iterations: %d roots: %f function value: %f\n",i,x2,f2);
    }
        while(fabs(f2)>e);
        getch();
}
