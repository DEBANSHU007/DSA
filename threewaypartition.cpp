class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int i=0,j=0,k=array.size()-1;
        while(i<=k)
        {
            if(array[i]<a)
            {
                swap(array[i],array[j]);
                i++;
                j++;
            }
            else if(array[i]>b)
            {
                swap(array[i],array[k]);
                k--;
            }
            else
            {
                i++;
            }
        }
    }
};