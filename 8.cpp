//question link->https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

#include<iostream>
using namespace std;
int main(){
    int x1,v1, x2, v2;
    cin>>x1>>v1>>x2>>v2;
    if(((x2-x1)%(v1-v2))==0 && ((x2-x1)/(v1-v2))>=0)
        cout<<"YES";
    else    
        cout<<"NO";
    return 0;
}