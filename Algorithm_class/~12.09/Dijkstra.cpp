//2015004375_김다빈_A(508호)

#include<stdio.h>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
#define INF 100000001

vector< vector< pair<int,int> > >map;

int main(){
    
    int n;
    scanf("%d",&n);
    
    map.resize(n+1);
    
    for(int i=1;i<=n;i++){
        
        int tmps,howm;
        scanf("%d %d",&tmps,&howm);
        
        for(int j=1;j<=howm;j++){
            
            int a,b;
            scanf("%d %d",&a,&b);
            
            map[tmps].push_back(make_pair(a, b));
        }
    }
    
    
    vector<int>dist(n+1,INF);
    dist[1]=0;
    
    priority_queue< pair<int,int> >q;
    q.push(make_pair(0,1));
    
    while(!q.empty()){
        
        int now=q.top().second;
        int nowdis=-q.top().first;
        
        q.pop();
        
        for(int i=0;i<map[now].size();i++){
            
            int next=map[now][i].first;
            
            if(dist[next]>nowdis+map[now][i].second){
                
                dist[next]=nowdis+map[now][i].second;
                q.push(make_pair(-dist[next],next));
            }
        }
    }
    
    int max=-1;
    for(int i=1;i<=n;i++){
        
        if(max<dist[i]) max=dist[i];
    }
    
    printf("%d\n",max);
}
