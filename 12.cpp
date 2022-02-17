

//question link->https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=false
#include<iostream>
using namespace std;
int main(){
    int n, p;
    cin>>n>>p;
    int x=p/2;
    int y=(n-p)/2;
    if(x>y){
        if(n%2==0 && p%2!=0)
            cout<<y+1;
        else
            cout<<y;
    }
    else        
        cout<<x;
    return 0;
}