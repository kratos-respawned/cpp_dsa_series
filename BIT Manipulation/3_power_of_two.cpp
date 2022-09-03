#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\n enter number :: ";
    cin>>n;

    int res=0;
    // jo number 2 ki power hai uske binary form me bs ek hi 1 hoga
    // while(n>0){
    //     if(n&1)res=(res<<1)|1;
    //     n=n>>1;
    // } 
    // if(res==1)
    // cout<<"\n power of 2 ";
    // else
    // cout<<"\n not power of 2 ";
    
    // or
    while(n>0){
        ++res;
        n=n&n-1;
    }
    if(res==1)
    cout<<"\n power of two";
    else cout<<"\n not power of two";
    //more optimised solution yha pe values precalculate kr li saari int max tk
    // int res=1;
    // for(int i=0;i<32;i++){
    //     if(n==res<<i){cout<<"power of two \n"; return 0;}
    // }
    // cout<<"not power of two \n";
    //     return 1;

    
    }
