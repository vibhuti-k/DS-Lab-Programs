#include <stdio.h>

int main()
{
    int a[100],b,i,c[100],d,j,e;
    printf("enter the number of element : ");
    scanf("%d",&b);
    printf("enter the element.\n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    e=a[0];
    d=a[0];
    for(i=0;i<b;i++)
    {
        for(j=1;j<b;j++)
        {
            if(a[j]==d)
            {
                continue;
            }
            if(a[j]>d)
            {
                e+=a[j];
                d=a[j];
            }
            else
            {
                c[i]=e;
            }
        }
    }
    int x=c[0];
    for(i=0;i<b;i++)
    {
        for(j=1;j<b;j++)
        {
            if(x<c[j])
            {
                x=c[j];
            }
        }
    }
    printf("%d",x);
    
    
    return 0;
}
