//question link->https://www.hackerrank.com/challenges/sock-merchant/problem?isFullScreen=false

#include<iostream>
using namespace std;
int main(){
    int n, arr[100000];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    //algo
    int count2=0;
    for(int i=0; i<n-1; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[j]==-1)
                continue;
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
                }
        }
        cout<<endl<<count<<endl;
        count2= count2 + count/2;
    }
    cout<<count2;
    return 0;
}