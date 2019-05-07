//2015004375_김다빈_A(508호)

#include<stdio.h>
#include<stdlib.h>

int a1[105];
int a2[105];
int dp[2][105];
int t[2][105];
int track[2][105];
int final[105];

int min(int a,int b){
    
    if(a<=b) return a;
    else return b;
}

void TRACK(int n,int res){
    
    int l=res;
    
    for(int i=n;i>1;i--){
        l=track[l-1][i];
        final[i-1]=l;
    }
    
    for(int i=1;i<n;i++) printf("%d %d\n",final[i],i);
    
    printf("%d %d\n",res,n);
}



int main(){
    
    int n;
    scanf("%d",&n);
    
    int e1,e2;
    int x1,x2;
    
    scanf("%d %d",&e1,&e2);
    scanf("%d %d",&x1,&x2);
    
    for(int i=1;i<=n;i++){
        
        scanf("%d",&a1[i]);
    }
    for(int i=1;i<=n;i++){
        
        scanf("%d",&a2[i]);
    }
    for(int i=1;i<=n-1;i++){
        scanf("%d",&t[0][i]);
    }
    for(int i=1;i<=n-1;i++){
        scanf("%d",&t[1][i]);
    }
    
    dp[0][1]=e1+a1[1];
    dp[1][1]=e2+a2[1];
    
    for(int i=2;i<=n;i++){
        
        if(dp[0][i-1]+a1[i]<=dp[1][i-1]+a1[i]+t[1][i-1]){
            dp[0][i]=dp[0][i-1]+a1[i];
            track[0][i]=1;
        }
        else{
            dp[0][i]=dp[1][i-1]+a1[i]+t[1][i-1];
            track[0][i]=2;
        }
        if(dp[1][i-1]+a2[i]<=dp[0][i-1]+a2[i]+t[0][i-1]){
            dp[1][i]=dp[1][i-1]+a2[i];
            track[1][i]=2;
        }
        else{
            dp[1][i]=dp[0][i-1]+a2[i]+t[0][i-1];
            track[1][i]=1;
        }
    }
    
    dp[0][n+1]=dp[0][n]+x1;
    dp[1][n+1]=dp[1][n]+x2;
    
    int res=min(dp[0][n+1],dp[1][n+1]);
    
    track[0][n+1]=1;
    track[1][n+1]=2;
    
    printf("%d\n",res);
    
    if(res==dp[0][n+1]) res=1;
    else res=2;
    
    TRACK(n,res);
    
    return 0;
}