#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10],b,c,d,e,i,j,k,l,m,n,o,x[10],f,p;
    //clrscr();
    printf("Enter the number of elements : ");
    scanf("%d",&b);
    printf("Enter the elements : ");
    for(i=0; i<b; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to insert : ");
    scanf("%d",&c);
    printf("Enter the place at which you want to insert : ");
    scanf("%d",&d);
    for(j=b; j>d-1; j--)
    {
        a[j]=a[j-1];
    }
    a[d-1]=c;
    for(k=0; k<=b; k++)
    {
        printf("%d,",a[k]);
    }
    printf("\nEnter the number you want to delete : ");
    scanf("%d",&e);
    for(l=0; l<=b; l++)
    {
        if(a[l]==e)
        {
            for(m=l; m<b+1; m++)
            {
                a[m]=a[m+1];
            }
            break;
        }
    }
    for(n=0; n<b; n++)
    {
        printf("%d,",a[n]);
    }
    printf("\n");
    printf("Reversed array is this : ");
    f=b-1;
    for(o=0; o<b; o++)
    {
        x[f]=a[o];
        f--;
    }
    for(p=0; p<b; p++)
    {
        printf("%d,",x[p]);
    }
    
    getch();
    return 0;
}
