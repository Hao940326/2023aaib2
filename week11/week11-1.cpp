#include<iostream>
using namespace std;
int isPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0)return 0;
        }
        return 1;
    }
int main(){
    int BOUND =10000,ans(0);
    for(int i=2;i<BOUND;i++){
        if(isPrime(i))cout<<i<<" ";
        ans++;
    }
    cout<<"½è¼Æ¦³"<<ans;
}
