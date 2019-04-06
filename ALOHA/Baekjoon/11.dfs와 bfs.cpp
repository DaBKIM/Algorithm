#include<stdio.h>
#include<queue>
using namespace  std;

int n,m,v;
int x,y;
int map[1005][1005];
int check1[1005];
int check2[1005];

void dfs(int now){
    
    check1[now]=1;
    
    printf("%d ",now);
    
    for(int i=1;i<=n;i++){
        
        if(map[now][i]==1&&check1[i]==0){
            check1[i]=1;
            dfs(i);
        }
    }
}

int main(){
    
    scanf("%d %d %d",&n,&m,&v);
    
    for(int j=0;j<m;j++){
        
        scanf("%d %d",&x,&y);
        
        map[x][y]=1;
        map[y][x]=1;
    }
    
    dfs(v);
    
    printf("\n");
    
    queue<int>q;
    
    q.push(v);
    check2[v]=1;
    
    while(!q.empty()){
        
        int start=q.front();
        q.pop();
        
        printf("%d ",start);
        
        for(int k=1;k<=n;k++){
            
            if(map[start][k]==1&&check2[k]==0){
                
                q.push(k);
                check2[k]=1;
            }
        }
    }
}//11.dfsbfs