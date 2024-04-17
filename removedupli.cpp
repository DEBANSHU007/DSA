class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        vector<int> arr;
        arr.push_back(a[0]);
        for(int i=0 ; i<n-1 ; i++){
            if(a[i]!=a[i+1]) arr.push_back(a[i+1]);
        }
        for(int i=0 ; i<arr.size(); i++){
            a[i]=arr[i];
        }
        return arr.size();
    }
};