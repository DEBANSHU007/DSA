class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        int cnt=0;
       for(int i=0;i<str.size();i++){
            if(str[i]!=' '){
               cnt++;
           }
       }
       

       if(cnt<26){
           return false;
       }
       int arr[26]={0};
       
       for(auto it:str){
           
          arr[it-'a']++;
       }
       
       for(int i=0;i<26;i++)
       {
           if(arr[i]==0){
              k--;
           }
       }
       
       return k>=0;
    }
};