class Solution
{
    public:
    int padovanSequence(int N)
    {
       int M = 1e9+7;
       int P[N];
       P[0] = P[1] = P[2] = 1;
       for(int i=3;i<N;++i){
            P[i] = (P[i-2] + P[i-3])%M;
       }
       return P[n];
    }
    
};