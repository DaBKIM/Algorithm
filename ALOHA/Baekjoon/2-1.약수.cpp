#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    sort(arr,arr+n);

    if(n%2==0) printf("%d\n",arr[n/2-1]*arr[(n/2)]);
    else printf("%d\n",arr[n/2]*arr[n/2]);
}//2-1.약수