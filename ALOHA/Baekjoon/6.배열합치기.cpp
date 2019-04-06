#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    
    int arr[n+m];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=n;j<m+n;j++){
        scanf("%d",&arr[j]);
    }
    
    sort(arr,arr+n+m);
    
    for(int z=0;z<n+m;z++){
        printf("%d ",arr[z]);
    }
}//6.배열합치기