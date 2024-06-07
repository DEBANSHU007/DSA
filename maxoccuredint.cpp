class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        int arr[1000001]={0};
        for(int i=0;i<n;i++)
        {
            arr[l[i]]++;
            arr[r[i]+1]--;
        }
        int sum=0;
        for(int i=0;i<maxx+2;i++)
        {
            sum+=arr[i];
            arr[i]=sum;
        }
        int index;
        int max=-99999;
        for(int i=0;i<maxx+2;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                index=i;
            }
        }
        return index;
    }
};
