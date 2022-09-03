#include<iostream>
using namespace std;
int main(){
    // given an array of n size with one every element repeating twice except one 
    //  find that number
    int a[5]={1,3,3,2,1};
    // we can use xor here the repeating number will cancel each other 
    int n=0;
    for(int i=0;i<5;i++){
        n^=a[i];
    } 
    cout<<"\n unique num is :: "<<n;
}