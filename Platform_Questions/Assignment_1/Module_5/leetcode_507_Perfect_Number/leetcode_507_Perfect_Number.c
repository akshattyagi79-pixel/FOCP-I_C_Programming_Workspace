int checkPerfectNumber(int num)
{
    int i,sum=0;
    if(num<=1)
        return 0;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    return sum==num;
}
