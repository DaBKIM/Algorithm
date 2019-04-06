//
//  main.cpp
//  BFS
//
//  Created by KimDabin on 2015. 9. 10..
//  Copyright (c) 2015년 KimDabin. All rights reserved.
//

/*
#include<stdio.h>//1만들기(1463)
#include<queue>
using namespace std;

int visit[10000001];

int main(){
    
    int n;
    scanf("%d",&n);
    
    queue<pair<int,int>>q;
    
    q.push(make_pair(n,0));
    while(!q.empty()){
        
        if(n==1) break;
        
        int now=q.front().first;
        int cnt=q.front().second;
        
        q.pop();
        
        if(now==1) {
            printf("%d",cnt);
            break;
        }
        
        
        if(now%3==0&&visit[now/3]==0) {
            
            visit[now/3]=1;
            q.push(make_pair(now/3,cnt+1));
            
        }
        
        if(now%2==0&&visit[now/2]==0) {
            visit[now/2]=1;
            q.push(make_pair(now/2,cnt+1));
        }
        
        if(visit[now-1]==0) {
            visit[now-1]=1;
            q.push(make_pair(now-1,cnt+1));
        }
    }
    
}
*/

#include<stdio.h>//나이트(4963)
#include<queue>
#include<algorithm>
using namespace std;

int visit[500][500];

int main(){
    
    int t;
    int map;
    
    int x0,y0,x,y;
    int loop[2][8]={
        {-2,-1, 1, 2,-2,-1, 1, 2},
        { 1, 2, 2, 1,-1,-2,-2,-1}
    };
    
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        queue<pair<pair<int,int>,int> >q;
        scanf("%d",&map);
        scanf("%d %d",&x0,&y0);
        scanf("%d %d",&x,&y);
        
        
        for(int j = 0; j < map; j++) {
            for(int k = 0; k < map; k++) {
                visit[j][k] = 0;
            }
        }
        
        
        
        q.push(make_pair(make_pair(x0,y0),0));
        
        
        
        while(!q.empty()){
            
          
            int nowx=q.front().first.first;
            int nowy=q.front().first.second;
            int cnt=q.front().second;
            
            q.pop();
            
            if(nowx==x&&nowy==y){
                printf("%d\n",cnt);
                break;
            }
            
            
            for(int j=0;j<8;j++){
                
                int newx=nowx+loop[0][j];
                int newy=nowy+loop[1][j];
                
                if(newx>=0&&newx<map&&newy>=0&&newy<map&&visit[newx][newy]==0){
                    
                    visit[newx][newy]=1;
                    q.push(make_pair(make_pair(newx,newy),cnt+1));
                }
            }
        }

        
    }
}

/*
#include<stdio.h>//미로탐색(2178)
#include<queue>
using namespace std;

int map[105][105];
int check[105][105];

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    int loop[2][4]={
        
        {0,0,1,-1},{1,-1,0,0}
    };
    
    queue<pair<int,int>>q;
    check[1][1]=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%1d",&map[i][j]);
        }
    }
    
    q.push(make_pair(1,1));
    
    while(!q.empty()){
        
        int x=q.front().first;
        int y=q.front().second;
        
        q.pop();
        
        if(x==n&&y==m){
            printf("%d\n",check[n][m]);
            break;
        }
        
        for(int k=0;k<4;k++){
            
            int nowx=x+loop[0][k];
            int nowy=y+loop[1][k];
            
            
            if(map[nowx][nowy]==1&&check[nowx][nowy]==0){
                
                check[nowx][nowy]=check[x][y]+1;
                q.push(make_pair(nowx,nowy));
            }
        }
        
    }
    
    
    
}
*/
/*
#include <iostream>//미로탐색(사스미ver.)
#include <cstdio>
#include <queue>
using namespace std;

int H, W, M[101][101], chk[101][101];

queue <pair<int, int> > Q;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

bool is_in_map(int x, int y) {
    return !(x == 0 || y == 0 || x == W + 1 || y == H + 1);
}

int main() {
    
    cin >> H >> W;
    
    for (int y = 1; y <= H; y++) {
        for (int x = 1; x <= W; x++) {
            scanf("%1d", &M[x][y]);
        }
    }
    
    Q.push(make_pair(1, 1));
    
    chk[1][1] = 1;
    
    while (!Q.empty()) {
        
        int x = Q.front().first, y = Q.front().second; Q.pop();
        
        for (int k = 0; k < 4; k++) {
            
            int nx = x + dx[k], ny = y + dy[k];
            
            if (is_in_map(nx,ny) && M[nx][ny] == 1 && chk[nx][ny] == 0) {
                
                Q.push(make_pair(nx, ny));
                chk[nx][ny] = chk[x][y] + 1;
            }
        }
    }
    
    cout << chk[W][H];
    return 0;
}
*/
/*
#include<stdio.h>//섬의 개수(4963)
#include<queue>
using namespace std;


int loop[2][8]={
    {-1,-1,-1,0,0,1,1,1},{1,0,-1,1,-1,1,0,-1}
};
int map[100][100];


int main(){
    
    int h,w;
    
    while(scanf("%d %d",&w,&h)&&w!=0&&h!=0){
        
        int cnt=0;
        int i,j;
        
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                
                scanf("%d",&map[i][j]);
            }
        }
        
        for(i=0;i<h;i++){
            
            for(j=0;j<w;j++){
                
                if(map[i][j]==1) {
                    
                    
                    queue<pair<int,int>>q;
                    
                    q.push(make_pair(i,j));
                    
                    while(!q.empty()){
                        
                        int x=q.front().first;
                        int y=q.front().second;
                        
                        q.pop();
                        
                        for(int m=0;m<8;m++){
                            
                            int nowx=x+loop[0][m];
                            int nowy=y+loop[1][m];
                            
                            if(nowx>=0&&nowx<h&&nowy>=0&&nowy<w&&map[nowx][nowy]==1){
                                
                                map[nowx][nowy]=0;
                                q.push(make_pair(nowx,nowy));
                                
                            }
                            
                        }
                    }
                    
                    cnt++;
                }
                
                if(i==h-1&&j==w-1) break;
            }
            if(i==h-1&&j==w-1) break;
        }
        printf("%d\n",cnt);
    }
}
*/
/*
#include<stdio.h>//스도쿠


int map[15][15];
int check[10];

void dfs(int a){
    
    for(int )
}

int main(){
    
    
}
*/
/*
#include<stdio.h>//섬의 개수re(4963)
#include<queue>
using namespace std;


int map[100][100];
int loop[2][8]={{-1,-1,-1,0,0,1,1,1},{0,1,-1,1,-1,0,1,-1}};

int main(){
    
    for(int i=0;;i++){
        
        int w,h;
        int cnt=0;
        scanf("%d %d",&w,&h);
        
        if(w==0&&h==0) return 0;
        
        for(int j=0;j<h;j++){
            
            for(int k=0;k<w;k++){
                
                scanf("%d",&map[j][k]);
            }
        }
        
        for(int j=0;j<h;j++){
            int k;
            for(k=0;k<w;k++){
                
                if(map[j][k]==1) {
                    
                    int tmpx=j;
                    int tmpy=k;
                    
                    queue<pair<int,int>>q;
                    
                    q.push(make_pair(tmpx,tmpy));
                    
                    while(!q.empty()){
                        
                        int nowx=q.front().first;
                        int nowy=q.front().second;
                        
                        q.pop();
                        
                        for(int e=0;e<8;e++){
                            
                            int newx=nowx+loop[0][e];
                            int newy=nowy+loop[1][e];
                            
                            if(newx>=0&&newx<h&&newy>=0&&newy<w&&map[newx][newy]==1){
                                
                                map[newx][newy]=0;
                                q.push(make_pair(newx,newy));
                            }
                        }
                    }
                    cnt++;
                }
                if(j==h-1&&k==w-1) break;
            }
            if(j==h-1&&k==w-1) break;
        }
        
        printf("%d\n",cnt);
        
    }
}
*/
/*
#include<stdio.h>//유기농배추(1012)
#include<queue>
using namespace std;

int map[100][100];
int loop[2][4]={
    {-1,0,0,1},{0,1,-1,0}
};

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int r=0;r<t;r++){
        
        int m,n,k;
        scanf("%d %d %d",&m,&n,&k);
        int cnt=0;
        int tmpx,tmpy;
    
        for(int j=0;j<n;j++){
        
            for(int p=0;p<m;p++){
            
                map[j][p]=0;
            }
        }

        for(int i=0;i<k;i++){
        
            scanf("%d %d",&tmpx,&tmpy);
            
            map[tmpy][tmpx]=1;
        
        }
        
 
        for(int j=0;j<n;j++){
            int p;
            for(p=0;p<m;p++){
                
                if(map[j][p]==1){
                    
                    queue<pair<int,int>>q;
                    
                    q.push(make_pair(j,p));
                    
                    while(!q.empty()){
                        
                        int x=q.front().first;
                        int y=q.front().second;
                        
                        
                        q.pop();
                        
                        for(int c=0;c<4;c++){
                            
                            int nowx=x+loop[0][c];
                            int nowy=y+loop[1][c];
                            
                            if(nowx>=0&&nowx<n&&nowy>=0&&nowy<m&&map[nowx][nowy]==1){
                                
                                map[nowx][nowy]=0;
                                q.push(make_pair(nowx,nowy));
                    
                            }
                        }
                    }
                    cnt++;
                }
                
            }
        }
        
        printf("%d\n",cnt);
    }
    
}
*/
/*
#include<stdio.h>//미로탐색re
#include<queue>
using namespace std;

int map[150][150];
int check[150][150];
int loop[2][4]={
    {1,0,0,-1},{0,1,-1,0}
};

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=m;j++){
            
            scanf("%1d",&map[i][j]);
        }
    }
    
    check[1][1]=1;
    queue<pair<int,int>>q;
    
    q.push(make_pair(1,1));
    
    while(!q.empty()){
        
        int x=q.front().first;
        int y=q.front().second;
        
        q.pop();
        
        if(x==n&&y==m) break;
        
        for(int k=0;k<4;k++){
            
            int nowx=x+loop[0][k];
            int nowy=y+loop[1][k];
            
            if(nowx>0&&nowx<=n&&nowy>0&&nowy<=m&&map[nowx][nowy]==1&&check[nowx][nowy]==0){
                
                check[nowx][nowy]=check[x][y]+1;
                q.push(make_pair(nowx,nowy));
            }
        }
    }
    printf("%d\n",check[n][m]);
}
*/
/*
#include<stdio.h>//유기농배추(1012)
#include<queue>
using namespace std;

int map[100][100];
int loop[2][4]={
    {0,0,-1,1},{-1,1,0,0}
};

void func(){
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            map[i][j]=0;
        }
    }
    
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    int cnt=0;
    int tmpx,tmpy;
    
    for(int j=0;j<n;j++){
        
        for(int p=0;p<m;p++){
            
            map[j][p]=0;
        }
    }
    
    for(int i=0;i<k;i++){
        
        scanf("%d %d",&tmpx,&tmpy);
        
        map[tmpx][tmpy]=1;
        
    }
    
    for(int j=0;j<m;j++){
        for(int p=0;p<n;p++){
            
            if(map[j][p] == 1){
                map[j][p] = 0;
                
                queue<pair<int,int> >q;
                
                q.push(make_pair(j,p));
                
                while(!q.empty()){
                    
                    int x=q.front().first;
                    int y=q.front().second;
                    
                    q.pop();
                    
                    for(int c=0;c<4;c++){
                       // printf("%d %d\n",loop[0][c],loop[1][c]);
                        int nowx=x+loop[0][c];
                        int nowy=y+loop[1][c];
                        
                        if(nowx >= 0 && nowx < m && nowy >= 0 && nowy < n && map[nowx][nowy]==1){
                            
                            map[nowx][nowy]=0;
                            q.push(make_pair(nowx,nowy));
                            
                        }
                    }
                }*//*
                  for(int a=0;a<m;a++){
                  for(int b=0;b<n;b++){
                  printf("%d ",map[a][b]);
                  }printf("\n");
                  }printf("\n\n");
                cnt++;*//*
            }
            
        }
    }
    
    printf("%d\n",cnt);
}

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int r=0;r<t;r++){
        func();
    }
}
*/
