//link to problem
// https://codeforces.com/problemset/problem/867/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string str;
    int s2f=0, f2s=0;
    cin>>n>>str;
    for(int i=1;i<n;i++){
        if(str[i-1]=='S' && str[i]=='F'){
            s2f++;
        }
        if(str[i-1]=='F' && str[i]=='S'){
            f2s++;
        }
    }
    if(s2f>f2s)
        cout<< "YES";
     else
     cout<< "NO";
    return 0;
} 
