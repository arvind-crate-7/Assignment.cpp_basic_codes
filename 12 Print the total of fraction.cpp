#include<iostream>
using namespace std;
int main(){
    float ans=0.0;
    for(float i=1.0;i<=9;i++){
        cout<<"value of "<<i<<"/"<<i+1<<" is:"<<i/(i+1)<<endl;
        ans=ans+(i/(i+1));
    }
    cout<<endl<<ans;
}
