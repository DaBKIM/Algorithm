//2015004375_김다빈_A(508호)

#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

char map[2][1005];
long long int dp[1005][1005];
vector<char>ans;

int main(){
    
    scanf("%s",map[0]);
    scanf("%s",map[1]);
    
    int end1=strlen(map[0]);
    int end2=strlen(map[1]);
    
    for(int i=1;i<=end1;i++){
        for(int j=1;j<=end2;j++){
            
            if(map[0][i-1]==map[1][j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                
                
                if(dp[i-1][j]>dp[i][j-1]) dp[i][j]=dp[i-1][j];
                else dp[i][j]=dp[i][j-1];
            }
        }
    }

    int i=end1;
    int j=end2;
    
    /*
    for(int x=1;x<=end1;x++){
        for(int y=1;y<=end2;y++){
            printf("%lld ",dp[x][y]);
        }
        printf("\n");
    }
    */
     
    
    while(i>0 && j>0){
        
        if(map[0][i-1]==map[1][j-1]){
            ans.push_back(map[0][i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i][j]==dp[i-1][j]){
                i--;
            }
            else{
                j--;
            }
            
        }
    }
    
    int size=(int)ans.size();
    for(int i=size-1;i>=0;i--){
        printf("%c",ans[i]);
    }
    printf("\n");
}
