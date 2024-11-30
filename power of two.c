bool isPowerOfTwo(int n) {
    int t=n;
    if(t<=0)
    {
        return false;
    }
    while (t>=2)
    {
        if(t%2!=0)
        {
            return false;
        }
        t=t/2;
    }
    return true;
    
}
