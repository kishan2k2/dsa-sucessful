//question link->https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true


//By removing the unsigned in the line 23 I was getting wrong solution, I don't know why I added it but it worked.

#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    long int arr[5], sum=0;
    long int max=INT_MIN;
    long int min=INT_MAX;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        sum=sum+arr[i];
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<sum-max<<" "<<unsigned(sum-min);
    return 0;
}