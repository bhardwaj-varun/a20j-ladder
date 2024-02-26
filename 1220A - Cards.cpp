// link to problem
// https://codeforces.com/problemset/problem/1220/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string str;
    cin>>n>>str;
    int noz=0;
    for(auto i: str){
        if(i == 'n'){
            cout<<"1 ";
        }
        else if(i=='z'){
            ++noz;
        }
    }

    for(int i=0;i<noz;i++){
        cout<<"0 "; 
    }

    return 0;
}
