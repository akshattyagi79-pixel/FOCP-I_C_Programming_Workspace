#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            int a=i;
            if(j<a)
                a=j;
            if(2*n-2-i<a)
                a=2*n-2-i;
            if(2*n-2-j<a)
                a=2*n-2-j;
            printf("%d ",n-a);
        }
        printf("\n");
    }
    return 0;
}
