class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        int low=0;
        int high=arr.size()-1;
        
        while(low<=high){
            int mid= (low + (high ) )/2;
            
            if(arr[mid]==key){
                return mid;
                break;
            }
            if(arr[low] <= arr[mid] ){
                if(key<arr[mid] && key>= arr[low]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(key>arr[mid] && key<= arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            
        }
         return -1;
    }
};