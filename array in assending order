#include <stdio.h>
void main()
{
    int n,num=0;
    int a[100];
    printf("Enter the number of integers:");
    scanf("%d",&n);
    printf("Enter the number in array: ");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                num=a[i];
                a[i]=a[j];
                a[j]=num;
            }
        }
    }
    printf("the sorted array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
}
