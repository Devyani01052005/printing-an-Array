#include <stdio.h>
int main()
{
    int a[5],i;
    printf("enter elements of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("'%d',",a[i]);
    }

    return 0;

}
