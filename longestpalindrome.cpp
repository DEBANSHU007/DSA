class Solution {
public:
    int longestPalindrome(string s) {
        int arr[27]={0};
       int arr1[27]={0};
       int o=0;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]>='A'&&s[i]<='Z')
           {
               arr[s[i]-'A']++;
           }
           
           else if(s[i]>='a'&&s[i]<='z')
           {
               
               arr1[s[i]-'a']++;
           }
       }
       int s1=0;
       for(int i=0;i<27;i++)
       {
           if(arr[i]%2==0)
           {
               s1=s1+arr[i];
           }
           else
           {
               o++;
               s1=s1+arr[i]-1;
           }
       } 
       for(int i=0;i<27;i++)
       {
           if(arr1[i]%2==0)
           {
               s1=s1+arr1[i];
           }
           else
           { 
               o++;
               s1=s1+arr1[i]-1;
           }
       }
       if(o>=1)
       {
           return  s1+1;
       }
       else
       {
           return s1;
       }
    }
};