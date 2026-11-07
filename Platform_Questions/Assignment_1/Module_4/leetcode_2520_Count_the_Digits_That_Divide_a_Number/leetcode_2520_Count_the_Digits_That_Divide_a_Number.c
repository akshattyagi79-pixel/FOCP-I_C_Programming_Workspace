int countDigits(int num)
{
    int temp=num,digit,count=0;
    while(temp>0)
    {
        digit=temp%10;
        if(digit!=0&&num%digit==0)
            count++;
        temp=temp/10;
    }
    return count;
}
