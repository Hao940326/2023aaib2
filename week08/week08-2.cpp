#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"plz enter your name:";
    char s1[30];
    cin>>s1;
    cout<<s1<<endl;
    char s2[30]="Hello !";
    cout<<s1<<" "<<s2<<endl;
    s1[0]='A';
    cout<<"Your name was change to "<<s1<<endl;
    cout<<"your name have "<< strlen(s1)<<" alphabet";
}
