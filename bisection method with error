#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x-17
float bisect(float x1, float x2)
{
    return(x1+x2)/2;
}
int main()
{
    int i=0;
    float x1,x2,x3,f1,f2,f3;
    do
    {
        printf("enter the values of x1 and x2");
        scanf("%f%f", &x1,&x2);
        f1=f(x1);
        f2=f(x2);
        if(f1*f2>0)
        {
            printf("roots are invalid\n");
            continue;
        }
        else
        {
            printf("roots lie between %f and %f\n",x1,x2);
            break;
        }
    }
    while(1);
    do
    {
        x3=bisect(x1,x2)
        f3=f(x3);
        if(f3*f1<0)
            x2=x3;
        else if(f3*f2<0)
            x1=x3;
            i++;
        printf("iterations: %d roots: %f function value: %f\n",i,x3,f3);
    }
        while(fabs(f3)>e);
        getch();
    }
