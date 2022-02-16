//quesiton link->https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=false
#include<iostream>
using namespace std;
int main(){
    int n, k, arr[100000], sum=0, b;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>b;
    for(int i=0; i<n; i++){
        if(i==k)
            continue;
        sum=sum+arr[i];
    }
    sum=sum/2;
    if(sum==b)
        cout<<"Bon Appetit";
    else 
        cout<<b-sum;
    return 0;
}