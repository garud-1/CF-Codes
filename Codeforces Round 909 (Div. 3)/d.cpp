class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
     char a=s1[0],b=s2[0],c=s3[0];
        int cnt=0;
        int p,q,r;
        p=s1.length(),q=s2.length(),r=s3.length();
        int n=max(max(p,q),r);
         
        if(a==b && b==c && c==a)
        {
          for(int i=0;i<n;i++)
          {
            while(s1[i]==s2[i] && s2[i]==s3[i] && s3[i]==s1[i] && i<n && i<p && i<q && i<r)
            {
                // if(s1[i]==s2[i] && s2[i]==s3[i] && s3[i]==s1[i]){ cnt++;i++;}
                // else break;
                cnt++;
                i++;
            }
          }
            return (s1.length()+s2.length()+s3.length()-3*cnt);
        }
        else return -1;
        
    }
};