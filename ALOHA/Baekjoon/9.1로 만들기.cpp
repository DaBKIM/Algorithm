#include<stdio.h>
#include<queue>
using namespace std;

int visit[10000001];


int main(){
    
    int t;
    scanf("%d",&t);
    
    queue<pair<int,int>>q;
    
    q.push(make_pair(t,0));
    
    while(!q.empty()){
        
        if(t==1) break;
        
        int now=q.front().first;
        int cnt=q.front().second;
        
        q.pop();
        
        if(now==1){
            printf("%d\n",cnt);
            break;
        }
        
        
        if(now%3==0&&visit[now/3]==0){
            
            visit[now/3]=1;
            q.push(make_pair(now/3,cnt+1));
        }
        
        if(now%2==0&&visit[now/2]==0){
            
            visit[now/2]=1;
            q.push(make_pair(now/2,cnt+1));
        }
        
        if(visit[now-1]==0){
            
            visit[now-1]=1;
            q.push(make_pair(now-1,cnt+1));
        }
        
    }
}//9.1로 만들기