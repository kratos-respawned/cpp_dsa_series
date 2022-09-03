#include<iostream>
using namespace std;
int main(){
    int a,setBit=0;
    cout<<"\n enter a :: ";
    cin>>a;
    // while(a>0)
    // {
    //     if((a&1))++setBit;
    //     a=a>>1;
    // }
    
    //   n&(n-1) performs a toggle operation on 1 setbit
    //     therfore for n setBits n (n&n-1) operations will be required
    while(a>0){
        ++setBit;
        a=a&a-1;
    }
    // for unset we can do ~a then calculate set bits
    cout<<"\n setBit :: "<<setBit;
}