#include <stdio.h>

int main()
{
    int a[100], i, b, c;
    printf("Enter the array.\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("At which place you want to insert : ");
    scanf("%d", &b);
    printf("Enter the number you want to insert :");
    scanf("%d", &c);
    for(i=5; i>=b; i--)
    {
        a[i+1] = a[i];
    }
    a[b] = c;
    for(i=0; i<6; i++)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}
