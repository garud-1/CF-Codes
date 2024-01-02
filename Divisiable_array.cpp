#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin>>n;
        int m=n*(n+1)/2;
        if(m%n ==0)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(m%n!=0)
        {
          for(int i=1;i<=n;i++)
            {
                cout<<i*2<<" ";
            } 
            cout<<endl;  
        }

    }
    return 0;
}