//2015004375_김다빈_A(508호)

#include<stdio.h>
#include<stdlib.h>

typedef struct HeapStruct* PriorityQueue;
typedef int ElementType;

struct HeapStruct {
    int Capacity;
    int Size;
    ElementType *Elements;
};

PriorityQueue CreateHeap(int heapsize){
    
    PriorityQueue h=(PriorityQueue)malloc(sizeof(struct HeapStruct));
    
    if(h==NULL){
        printf("Out of space!\n");
        return NULL;
    }
    
    h->Elements=(ElementType*)malloc((heapsize+1)*sizeof(ElementType));
    
    if(h->Elements==NULL){
        printf("Out of space!\n");
        return NULL;
    }
    
    h->Capacity=heapsize;
    h->Size=0;
    
    return h;
}

int IsFull(PriorityQueue heap){
    
    return heap->Size==heap->Capacity;
}

int IsEmpty(PriorityQueue heap){
    
    return heap->Size==0;
}

void Insert(PriorityQueue heap,ElementType x){
    
    int i;
    
    if(IsFull(heap)){
        
        printf("Priority queue is FULL! Can't INSERT!\n");
        return;
    }
    
    for(i=++heap->Size;i!=1&&heap->Elements[i/2]<x;i/=2){
        
        heap->Elements[i]=heap->Elements[i/2];
    }
    
    heap->Elements[i]=x;
    
}

ElementType DeleteMax(PriorityQueue heap){
    
    if(IsEmpty(heap)){
        
        printf("Priority queue is EMPTY! Can't DELETE!\n");
        return -1;
    }
    else{
        
        int i,max,child, last;
        
        max=heap->Elements[1];
        last=heap->Elements[heap->Size--];
        
        for(i=1;i*2<=heap->Size;i=child){
            
            child=i*2;
            
            if(child!=heap->Size&&heap->Elements[child]<heap->Elements[child+1]) child++;
            
            if(heap->Elements[child]>last) heap->Elements[i]=heap->Elements[child];
            else break;
        }
        
        heap->Elements[i]=last;
        
        return max;
    }
    
}

void PrintHeap(PriorityQueue heap,int t){
    
    int i;
    
    if(IsEmpty(heap)){
        
        printf("Priority queue is EMPTY! Can't PRINT!\n");
        return;
    }
    
    for(int j=1;j<=t;j++){
        printf("%d ",DeleteMax(heap));
    }
    printf("\n");
    
    for(i=1;i<=heap->Size;i++){
        printf("%d ",heap->Elements[i]);
    }
    printf("\n");
    
}

int main(){
    
    
    PriorityQueue heap=NULL;
    
    int n,k;
    
    scanf("%d %d",&n,&k);
    
    heap=CreateHeap(n);
    
    for(int i=0;i<n;i++){
        
        int tmp;
        scanf("%d",&tmp);
        
        Insert(heap,tmp);
    }
    
    PrintHeap(heap, k);
    return 0;
    
}
