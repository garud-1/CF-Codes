#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[10][10];

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];
            }
        }
      
        int points=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(arr[i][j] == 'X'){
                    if(i<=4){
                         points += (i+1);
                    }else{
                        points += 10-(i+1);
                    }                     
                }
            }
        }
        cout<<points<<endl;
    }
}