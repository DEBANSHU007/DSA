class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        while(numBottles/numExchange!=0)
        {
            sum+=numBottles/numExchange;
            int div=numBottles/numExchange;
            int rem=numBottles%numExchange;
            numBottles=div+rem;
        }
        return sum;
    }
};