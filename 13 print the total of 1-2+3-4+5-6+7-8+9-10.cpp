#include<iostream>
using namespace std;
int main(){
    int ans=0;
    for(int i=0;i<10;i++){
        if(i%2==0){
            ans=ans+i+1;
        }
        else{
            ans=ans-i+1;
        }
    }
    cout<<ans;
}
