class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
           int a=0,b=arr.size()-1;
        while(a<b){
            if(arr[a]==1){
                swap(arr[a],arr[b]);
                b--;
            }
            else{
                a++;
            }
        }
    }
};