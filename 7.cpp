//question link->https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true

#include<iostream>
using namespace std;
int main(){
    long int s, t, a, b, m, n, ora[10000], ap[10000], countor=0;
    long int countap=0;
    cin>>s>>t>>a>>b>>m>>n;
    // int d1= s-a;
    for(int i=0; i<m; i++)
        cin>>ap[i];
    // int d2= t-b;
    for(int i=0; i<n; i++)
        cin>>ora[i];
    for(int i=0; i<m; i++){
        if(s<=(a+ap[i]) && (a+ap[i])<=t)
            countap++;
    }
    for(int i=0; i<n; i++){
        if(s<=(b+ora[i]) && (b+ora[i])<=t)
            countor++;
            // cout<<b+ora[i]<<endl;
    }
    cout<<countap<<endl<<countor;
    return 0;
}