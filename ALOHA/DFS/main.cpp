//
//  main.cpp
//  DFS
//
//  Created by KimDabin on 2015. 9. 17..
//  Copyright (c) 2015년 KimDabin. All rights reserved.
//
/*
#include <stdio.h>//1260 BFS와 DFS
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

int map[10005][10005];
int check1[1005];
int check2[1005];

int main(){
    
    int n,m,v;
    int x,y;
    scanf("%d %d %d",&n,&m,&v);
    
    for(int j=0;j<=n;j++){
        for(int k=0;k<n;k++){
            
            map[j][k]=0;
        }
    }
    
    for(int i=0;i<m;i++){
        
        scanf("%d %d",&x,&y);
        map[x][y]=1;
        map[y][x]=1;
    }
    
    stack<int>s;
    
    s.push(v);
    
    while(!s.empty()){
        
        int now=s.top();
        s.pop();
        
        if(check1[now]==1) continue;
        
        check1[now]=1;
        printf("%d",now);
        
        for(int e=n;e>=1;e--){
            
            if(map[now][e]==1&&check1[e]==0){
                s.push(e);
            }
        }
        
        
    }
    
    printf("\n");
    
    queue<int>q;
    
    q.push(v);
    check2[v]=1;
    
    while(!q.empty()){
        
        int qnow=q.front();
        q.pop();
        
        printf("%d",qnow);
        
        for(int e=1;e<=n;e++){
            
            if(map[qnow][e]==1&&check2[e]==0){
                
                q.push(e);
                check2[e]=1;
                
            }
        }
    }
}
*/
/*
#include<stdio.h>//1260재귀형
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
}
*/

#include<stdio.h>//dovelet 25층 eating puzzle
#include<algorithm>
using namespace std;

int cal[25];
int limit,many;
int add;
int res;
int ornot;

void dfs(int now,int num){
    
    if(now==many)
    {
        if(num<=limit) res=max(res,num);
        return;
    }
    
    if(num>limit) return;
        
    dfs(now+1,num);
        
    num=num+cal[now];
    dfs(now+1,num);
        
        
    
}


int main(){

    scanf("%d %d",&limit,&many);
    
    for(int i=0;i<many;i++){
        
        scanf("%d",&cal[i]);
    }
    
    dfs(0,0);
    printf("%d",res);
}
