class Solution{
	
	
	public:
	vector<int> findMissing(int A[], int B[], int N, int M) 
	{ 
	    // Your code goes here
	    vector<int>v;
	   //map<long long ,long long int>mp1;
	   unordered_map<long long ,long long int>mp2;
	   
	   for(int i=0;i<M;i++)
	   {
	       mp2[B[i]]++;
	   }
	   for(int i=0;i<N;i++)
	   {
	       if(mp2[A[i]]==0)
	       {
	           v.push_back(A[i]);
	       }
	   }
	   return v;
	   
	} 
};
	