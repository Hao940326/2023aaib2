
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char line[20];
    cin>>line;
    int N = strlen(line);
    int bad=0;
    for(int i=0;i<N;i++){
        if(line[i]!=line[N-i-1])bad=1;
    }
    if(bad==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
