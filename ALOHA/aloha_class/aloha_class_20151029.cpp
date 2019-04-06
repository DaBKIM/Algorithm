//
//  main.cpp
//  aloha_class
//
//  Created by KimDabin on 2015. 10. 29..
//  Copyright © 2015년 KimDabin. All rights reserved.
//

/*

#include<stdio.h>

int main(){
    
    int n;
    int arr[1000000][2];
    scanf("%d",&n);
    
    arr[1][0]=0;
    arr[1][1]=1;
    
    for(int i=2;i<=n;i++){
        
        arr[i][0]=arr[i-1][0]+arr[i-1][1];
        arr[i][1]=arr[i-1][0];
    }
    
    printf("%d",arr[n][1]+arr[n][0]);
   //이친수
}
*/
/*
#include<stdio.h>//동전2
#include<iostream>
#include<algorithm>
using namespace std;
#define lnf 1000000000

int dp[10005];
int min(int a,int b){
    
    if(a>b) return b;
    else return a;
}

int main(){
    
    int n,k;
    scanf("%d %d",&n,&k);
    fill(dp+1,dp+10005,lnf);
    
    for(int i=0;i<n;i++){
        
        int coin;
        scanf("%d",&coin);
        
        
        for(int j=coin;j<=k;j++){
            
            dp[j]=min(dp[j],dp[j-coin]+1);
        }
    }
    
    printf("%d",dp[k]);
}
*/
/*
#include<stdio.h>//hoj.ox퀴즈

int main(){
    
    long long int t;
    long long int arr[100005];
    
    scanf("%lld",&t);
    
    arr[0]=0;
    arr[1]=1;
    for(int i=0;i<t;i++){
        
        int ques;
        scanf("%d",&ques);
        
        for(int j=2;j<=ques;j++){
            arr[j]=arr[j-1]+arr[j-2];
        }
        printf("%lld\n",arr[ques]);
    }
}//https://www.acmicpc.net/problem/2624
*/

