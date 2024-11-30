bool isPowerOfThree(int n) {
    int t=n;
    if(n<=0)
    {
        return false;
    }
    while (t>1)
    {
        if(t%3!=0)
        {
            return false;
        }
        t=t/3;
    }
    return true;
    
}
    
