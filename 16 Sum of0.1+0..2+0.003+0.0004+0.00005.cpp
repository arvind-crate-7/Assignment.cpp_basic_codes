#include<iostream>
using namespace std;
int main(){
    int j=10;
    float ans=0;
    for(float i=1.0;i<=5;i++){
        ans=ans+(i/j);
        j=j*10;
    }
    cout<<ans;
}
