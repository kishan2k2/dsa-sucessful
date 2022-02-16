#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    long int n, arr[100000], count=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    //algo
    for(int i=0; i<n; i++){
        if(max==arr[i]){
            max=arr[i];
            count++;
        }
        if(max<arr[i]){
            max=arr[i];
            count=0;
        }
    }
    cout<<count+1;
}