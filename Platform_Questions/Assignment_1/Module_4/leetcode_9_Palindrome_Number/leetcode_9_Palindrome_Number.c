int isPalindrome(int x)
{
    int original=x,reverse=0,digit;
    if(x<0)
        return 0;
    while(x>0)
    {
        digit=x%10;
        if(reverse>(2147483647-digit)/10)
            return 0;
        reverse=reverse*10+digit;
        x=x/10;
    }
    return original==reverse;
}
