//2015004375_김다빈_A(508호)


#include<stdio.h>
#include<stdlib.h>
#define white 0
#define gray 2
#define black 3

int cnt=-1;
int arr[1001][1001];

typedef struct node{
    
    int color;
    int from;
    int cur;
    int to;
}Node;

Node map[1001];

int MAX(int n){
    
    int res=1;
    
    int max=map[0].to;
    
    for(int i=1;i<n;i++){
        
        if(max<map[i].to){
            max=map[i].to;
            res=i+1;
        }
    }
    
    map[res-1].to=-1;
    
    return res;
}


int ornot=1;

void link(int s,int e,int n){
    
    if(map[s].color==white){
        map[s].cur=cnt;
        cnt++;
        map[s].from=e;
        map[s].color=gray;
    }
    if(map[s].color!=black){
        
        int tmp;
        int i,ck=-1;
        for(i=0;i<n;i++){
            
            if(arr[s][i]==1){
                if(map[i].color!=black){
                    arr[s][i]=2;
                    tmp=i;
                    ck=i;
                    break;
                }
            }
        }
        
        if(ck!=tmp) tmp=ck;
        
        if(map[tmp].color==gray){
            
            ornot=0;
            return;
        }
        else if(tmp!=-1){
            
            link(tmp,s,n);
            
        }
        else{
            map[s].to=cnt;
            cnt++;
            map[s].color=black;
            
            if(map[s].from!=-1){
                link(map[s].from, map[map[s].from].from, n);
            }
        }
    }
}

void Topological(int n){
    
    for(int i=0;i<n;i++){
        
        link(i,-1,n);
    }
    
    if(ornot==0){
        printf("0\n");
        return;
    }
    else{
        printf("1\n");
        
        for(int j=0;j<n;j++){
            printf("%d ",MAX(n));
        }
    }
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        map[i].color=white;
    }
    
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        
        arr[a-1][b-1]=1;
    }
    
    Topological(n);
    
    return 0;
}
