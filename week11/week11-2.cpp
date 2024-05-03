#include<iostream>
using namespace std;
int main(){
    unsigned long long BOUND =259571,ans(0);
    unsigned long long table[BOUND];
    for(int i=2;i<BOUND;i++){
        if(table[i]==0){
            ans++;
            for(int k=i*i;k<BOUND;k+=i){
                table[k]=-1;
            }
        }
    }
    cout<<"½è¼Æ¦³"<<ans;
}
