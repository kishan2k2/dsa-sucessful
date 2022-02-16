//question link-> https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true

#include<iostream>
using namespace std;
int main(){
    int y;
    cin>>y;
    if(y>=1919){
        if(y%4==0 && !(y%400!=0 && y%100==0)){
            cout<<"12.09."<<y;
        }
        else
            cout<<"13.09."<<y;
        return 0;
    }
    else if(y==1918){
        cout<<"26.09.1918";
    }
    else{
        if(y%4==0){
            cout<<"12.09."<<y;
        }
        else
            cout<<"13.09."<<y;
        return 0;
}
}