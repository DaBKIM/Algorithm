//2015004375_김다빈_A(508호)

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;

int A[100001];
int B[100001];
int dp[100001];

int main(){
    
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    
    for(int i=1;i<=k;i++) scanf("%d %d",&A[i],&B[i]);
    
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        dp[tmp]++;
    }
    
    for(int i=1;i<=m;i++){
        dp[i]=dp[i]+dp[i-1];
    }
    
    for(int i=1;i<=k;i++){
        printf("%d\n",dp[B[i]]-dp[A[i]-1]);
    }
}