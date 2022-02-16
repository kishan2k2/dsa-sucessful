//question link->https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true&h_r=next-challenge&h_v=zen

#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int sum1=0;
    int sum2=0;
    int i, j, n, arr[1000][1000];
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    for(int i=0; i<n; i++){
        // sum=sum+arr[i][i]-arr[i][n-i+1];
        sum1= sum1+arr[i][i];
        sum2=sum2+arr[i][n-i-1];
    }
    int result=sum1-sum2;
    if(result>=0)
        cout<<result;
    else {
        cout<<-result;
    }
    return 0;
}