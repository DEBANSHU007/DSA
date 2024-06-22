class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        long long ans=0,temp=0;
        bool indication=false;
        for(char x:sentence){
            if(x>='0' and x<='9'){
                temp = temp*10+(x-'0');
                if(x=='9')indication=true;
            }
            else if(x==' '){
                if(!indication)ans=max(ans,temp);
                indication=false;
                temp=0;
            }
        }
        if(!indication)ans=max(ans,temp);
        return ans==0?-1:ans;
    }
};