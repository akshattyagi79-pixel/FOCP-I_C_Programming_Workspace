#include <stdio.h>
int main()
{
    int n,grade,i,rounded;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&grade);
        rounded=grade;
        if(grade>=38)
        {
            if(grade%5>=3)
                rounded=grade+(5-grade%5);
        }
        printf("%d\n",rounded);
    }
    return 0;
}
