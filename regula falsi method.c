#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x+3*x-5
void main ()
{
    int i=0;
    float x0,x1,x2,f0,f1,f2;
    printf("\n\t\t\4 Enter x0 and x1= ");
    scanf("%f%f",&x0, &x1);
    do
    {
        f0=f(x0);
        f1=f(x1);
        f2=f(x2);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        if (f0*f1<0)
        {
            x1=x2;
            f0=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
        i++;
        printf("\n \4 No. of iteration=%d \t",i);
        printf("root=%f \t",x2);
        printf("function value=%f \n\n",f2);
    }
    while (fabs(f2)>e);
    getch();
}
