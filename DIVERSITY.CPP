#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
  cin>>t;
  

   while(t--)
    {
        set<int>s;
        
        int n;
        cin>>n;
        int arr[n];
        
        for(int j =0;j<n;j++)
        {
           int a;
           cin>>a;
           
           if(s.count(a)) s.insert(-a);
           else s.insert(a);
            
        }
      

        cout<<s.size()<<endl;
    }
    
    return 0;
}