int addDigits(long long int num) {
    long long int sum=num,rem;
    while (sum > 9)
    {
        num=sum;
        sum=0;
        while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    }
    return sum;
}
    
