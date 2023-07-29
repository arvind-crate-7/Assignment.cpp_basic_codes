#include<iostream>
using namespace std;
int main(){
    int n;
    int reverseval=0;
    cout<<"Enter number:";
    cin>>n;
    while(n){
        int rem=n%10;
        reverseval=reverseval*10+rem;
        n=n/10;
    }
    cout<<reverseval;
}
