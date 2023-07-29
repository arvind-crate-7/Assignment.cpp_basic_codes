#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter number:";
    cin>>n1;
    int n=n1;
    int cubesum=0;
    while(n){
        int rem=n%10;
        rem=rem*rem*rem;
        cubesum=cubesum+rem;
        n=n/10;
    }
    if(cubesum==n1){
        cout<<n1<<" is a armstrong number.";
    }
    else{
        cout<<n1<<" not a armstrong number.";
    }
}
