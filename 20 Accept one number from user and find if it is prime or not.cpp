#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if((n%i)==0){
            cout<<"This is not a prime number."<<endl;
            break;
        }
    }
    if(i==n)
        cout<<"This is prime number."<<endl;
}
