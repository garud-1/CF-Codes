#include <bits/stdc++.h>
using namespace std;
void cntBINERY(int num)
{
    for(int i=10;i>=0;--i)
    {
        cout<<((num>>i)&1);
    }
}
int main()
{
    char c;cin>>c;
    // for(char i=c;i<='E';i++)
    // {
    //     cout<<i<<endl;
    //     cntBINERY(int(i));
    //     cout<<endl;
    // }

    char A='A';
    // char a= char( 'A' | ' ');
    // cout<<a<<endl;
    // //lower case to upper case
    // cout<<char(a&(~(1<<5)))<<endl;
    // cout<<char('z'&'_')<<endl;
    // //upper case to lower case 
    // cout<<char('C' | ' ')<<endl;
    // cout<<char('C' |(1<<5))<<endl;

    cntBINERY(59);
    cout<<endl;
    int a =59;
    int i=5;
    int b= (a & (~((1<<(i)) -1)));
    cntBINERY(b);
    return 0;
}