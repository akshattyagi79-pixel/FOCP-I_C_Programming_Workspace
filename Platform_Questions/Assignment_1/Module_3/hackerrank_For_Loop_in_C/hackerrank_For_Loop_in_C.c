#include <stdio.h>
int main()
{
    int a,b,i;
    char *words[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i>=0&&i<=9)
            printf("%s\n",words[i]);
        else if(i%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
