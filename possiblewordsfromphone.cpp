class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> keys={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     
     vector<string> ans;
     
     void solve(int a[],int n,string temp,int i){
     if(i==n){
         ans.push_back(temp);
         return;
     }
     
     for(int j=0;j<keys[a[i]].size();j++){
         solve(a,n,temp+keys[a[i]][j],i+1);
     }
     }
     vector<string> possibleWords(int a[], int N)
    {
        solve(a,N,"",0);
        return ans;
    }
};
