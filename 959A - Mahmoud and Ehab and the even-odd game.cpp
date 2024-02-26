// https://codeforces.com/problemset/problem/935/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    //find the no of divisors of the given number
    int n;
    cin>>n;
    int cnt=0;
    for(int i =1; i<=n/2 ; i++){
        if(n%i==0) cnt++;
    }
    cout<< cnt++;
} 
