class Solution {
  public:
    int minSteps(int d) {
         int sum=0,steps=0,i=0;
        while(sum<d){
            sum+=steps;
            steps++;
        }
        while((sum-d)%2==1){
            sum+=steps;
            steps++;
        }
       
        
      return steps-1;

    }
};