long getMaximumProfit(long *values, int n)
{
    long profit=0;
    for(int i=1; i<n; i++) {
        if(values[i] > values[i-1]) {
            profit += (values[i]-values[i-1]);
        }
    }
    
    return profit;
}