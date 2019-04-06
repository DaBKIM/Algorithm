//
//  aloha_class_20151105.cpp
//  aloha_class
//
//  Created by KimDabin on 2015. 11. 5..
//  Copyright © 2015년 KimDabin. All rights reserved.
//
/*
#include<stdio.h>//동전1

int dp[10005];

int main(){
    
    int n,k;
    
    dp[0]=1;
    scanf("%d %d",&n,&k);
    
    for(int i=1;i<=n;i++){
        
        int coin;
        scanf("%d",&coin);
        
        for(int j=coin;j<=k;j++){
         
            dp[j]=dp[j]+dp[j-coin];
            
            printf("%d %d\n",j,dp[j]);
            
        }
    }
    printf("%d",dp[k]);
    return 0;
}
*/
/*
#include<stdio.h>//rgb거리 1149

int min(int a,int b){
    
    if(a>b) return b;
    else return a;
}

int main(){
    
    int n;
    int a,b,c;
    int dp[1005][3]={0};
    int res=1000000;
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        
        scanf("%d %d %d",&a,&b,&c);
        dp[i][0]=min(dp[i-1][1]+a,dp[i-1][2]+a);
        dp[i][1]=min(dp[i-1][0]+b,dp[i-1][2]+b);
        dp[i][2]=min(dp[i-1][0]+c,dp[i-1][1]+c);
        printf("%d %d %d\n",dp[i][0],dp[i][1],dp[i][2]);
    }
    
    
    for(int j=0;j<3;j++){
        
        if(dp[n][j]<res) res=dp[n][j];
    }
    printf("%d\n",res);
    return 0;
}
*/