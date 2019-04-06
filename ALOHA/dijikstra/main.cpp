//
//  main.cpp
//  dijikstra
//
//  Created by KimDabin on 2016. 6. 6..
//  Copyright © 2016년 KimDabin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define INT_MAX 2147483647 // 최대 정수
#define MAX_VERTICES 1000 //정점의 수
#define INF 10000000 //무한대(연결이 없는 경우)

int weight[MAX_VERTICES][MAX_VERTICES];
int d[MAX_VERTICES]; //시작 정점으로부터의 최단 경로 거리
int visit[MAX_VERTICES]; //방문한 정점 표시
int path[MAX_VERTICES][MAX_VERTICES]; //최단거리 정점까지 거치는 노드들을 저장
int check[MAX_VERTICES];//한 정점으로 가는 정점을 표시


typedef struct Node{
    int vertex[1000];
    int size;
}Node;


//path 인접행렬 초기화

void path_init(int vertexnum){
    
    int i, j;
    
    for (i = 0; i<vertexnum; i++){
        for (j = 0; j < vertexnum; j++){
            path[i][j] = INF;
            weight[i][j] = INF;
        }
    }
}

// 최단거리에 있는 정점을 찾는 함수

int choose(int n){
    
    int i, min, minpos;
    
    min = INT_MAX;
    minpos = -1;
    
    for (i = 0; i<n; i++){
        
        if (d[i]<min && !visit[i]){
            
            min = d[i];
            
            minpos = i;
            
        }
    }
    
    return minpos;
    
}

//최단 경로 알고리즘

void dijikstra(int start, int vertexnum){
    
    int i, j, u, w;
    
    for (i = 0; i<vertexnum; i++){//초기화
        
        d[i] = weight[start][i];
        visit[i] = 0;
        check[i] = 1;
        path[i][0] = start;
        
    }
    
    visit[start] = 1;//시작 정점 방문 표시
    d[start] = 0;
    
    for (i = 0; i<vertexnum - 2; i++){
        
        u = choose(vertexnum);
        visit[u] = 1;
        
        for (w = 0; w<vertexnum; w++){
            
            if (!visit[w]){
                
                if (d[u] + weight[u][w] < d[w]){
                    
                    if (i == 0){//처음에는 인접한 정점에 연결
                        
                        path[w][check[w]] = u; //갱신된 경로를 경로 배열에 저장
                        check[w]++;
                        
                    }
                    else{
                        
                        for (j = 0; j<(check[u] + 1); j++){//저장된 만큼 반복
                            
                            path[w][j] = path[u][j]; //경로를 갱신
                            path[w][j + 1] = u; //끝부분에 자기자신을 저장
                            check[w]++;
                            
                        }
                        
                    }
                    
                    d[w] = d[u] + weight[u][w];
                    
                }
                
            }
            
        }
        
    }
    
}

int findnumber(int num, Node *V){
    
    int i;
    for (i = 0; i < V->size;i++){
        if (V->vertex[i] == num) return i;
    }
    
    return 0;
}



int main(){
    
    int i, j;
    
    int max = 0;
    int start,ck;
    int input,input2,input3;
    char c,c2,tmp;
    int st,ed;
    
    
    Node* node = NULL;
    node = (Node*)malloc(sizeof(Node));
    node->size = 0;
    
    
    i = 0;
    
    while (c!='\n'){
        
        scanf("%d", &input);
        scanf("%c", &c);
        
        node->vertex[i++] = input;
        node->size++;
        
        if(max<input) max=input;
        
    }
    
    
    path_init(node->size);
    
    while (1)
    {
        
        ck=scanf("%d%c%d%c%d%c",&input,&c,&input2,&c2,&input3,&tmp);
        
        if(ck<0) break;
        
        st = findnumber(input, node);
        ed = findnumber(input2, node);
        weight[st][ed] = input3;
        if(tmp=='\n') break;
    }
    
    start = findnumber(max, node);
    
    
    dijikstra(start, node->size);
    
    
    for (i = 0; i< node->size; i++){ //저장된 경로들 출력
        
        printf("from %d to %d : ",max,node->vertex[i]);
        
        for(j=0;j<node->size;j++){
            
            if(max==node->vertex[i]) break;
            if(path[i][j]!=INF) printf("%d->",node->vertex[path[i][j]]);
        }
        
        printf("%d (cost %d)\n",node->vertex[i],d[i]);
    }
    
}
