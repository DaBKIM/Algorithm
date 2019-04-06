#include <stdio.h>

int n;
int a[305];
int dp[305][3];

int max(int a,int b){
    
    if(a>b) return a;
    else return b;
}


int main() {
    
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
        scanf("%d", &a[i]);
    
    dp[1][1] = dp[1][2] = a[1];
    
    for(int i=2; i<=n; i++) {
        dp[i][1] = dp[i-1][2] + a[i];
        dp[i][2] = max(dp[i-2][1], dp[i-2][2]) + a[i];
    }
    
    printf("%d", max(dp[n][1], dp[n][2]));
}//19.계단오르기