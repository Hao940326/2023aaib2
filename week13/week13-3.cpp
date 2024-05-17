
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int line[100];
    int N(0);
    while(n>0){
        int now =n%10;
        //cout<<"n="<<now<<endl;
        n/=10;
    }
    int bad =0 ;
    for(int i=0;i<N;i++){
        if(line[i]!=line[N-i-1])bad=1;
    }
    if(bad==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
