#include <stdio.h>
int main()
{
    int T,N,first,last;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        last=N%10;
        while(N>=10)
            N=N/10;
        first=N;
        printf("%d\n",first+last);
    }
    return 0;
}
