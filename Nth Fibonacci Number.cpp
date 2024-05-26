#include<bits/stdc++.h>
using namespace std;

int main()
{
       int num;
       cin>>num;
       if(num==0 || num==1) cout<<num;
       else{
               int a=0,b=1;
               int c;
               for(int i=2;i<=num;i++){
                       c=a+b;
                       a=b;
                       b=c;
               }
               cout<<c;
       }
}
