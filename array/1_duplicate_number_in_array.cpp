#include<iostream>
using namespace std;
int main(){
    // given an array of n size with elements upto n-1 and one element is repeated twice
    // find that number
    int a[5]={1,2,3,3,4};
    //approach one (optimised one)
    int num=0;
    for(int i=0;i<5;i++){
        num^=a[i];
    }
    // n=1^2^3^3^4==>1^2^4 because 3^3=0
    for(int i=0;i<5;i++){
        num^=i;
    }
    // n= ( 1^2^4 )^ 1^2^3^4==>3
    cout<<"\n duplicate num is :: "<<num;

    // another approach hashmap 
    // int hashArray[5]={0};
    // for(int i=0;i<5;i++){
    //     if(hashArray[a[i]]==1){
    //         cout<<"\n duplicate num is "<<a[i];
    //         break;
    //     }
    //     hashArray[a[i]]=1;
        
    // }
}