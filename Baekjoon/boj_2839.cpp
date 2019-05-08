
// boj_2839
// use dynamic programming

#include<stdio.h>
#define MAXN 9999999
int dp[5001];

int main(){

    int sweet[2]={3,5};
    int n;
    int dmin;

    for(int i =0;i<5001;i++) dp[i] = 0;
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        dp[i] = dmin = MAXN;
        for(int j = 0;j<2;j++){
            if(i-sweet[j] < 0) break;
            if(dmin>dp[i-sweet[j]]) dmin = dp[i-sweet[j]];
            // printf("%d %d\n",j,dmin);
        }
        // dp[0] == 0 -> dmin == 0
        // --> dp[3] = dmin(0) + 1 -> dp[3] == 1
        // minimum number of sweets 
        if(dmin != MAXN) dp[i] = dmin+1;
    }

    if(dp[n] == MAXN) printf("-1\n");
    else printf("%d\n",dp[n]);

    return 0;
}