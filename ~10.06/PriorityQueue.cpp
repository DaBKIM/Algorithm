
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
    
    for(i=heap->Size;i!=1&&heap->Elements[i/2]<x;i/=2){
        
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
        
        int max;
        int last;
        int child=2;
        int parent=1;
        
        max=heap->Elements[1];
        last=heap->Elements[heap->Size];
        
        while(child<=heap->Size){
            
            if ((child < heap->Size) && (heap->Elements[child]) <= heap->Elements[child + 1])
                child++;
            if (last >= heap->Elements[child])
                break;
            
            heap->Elements[parent] = heap->Elements[child];
            parent = child;
            child *= 2;
        }
        
        heap->Elements[parent]=last;
        
        return max;
    }
    
}

void Up(PriorityQueue heap, int k){
    
    int i;
    int go=heap->Elements[k];
    
    for(i=k;i!=1&&(heap->Elements[i/2]<go);i/=2){
        heap->Elements[i]=heap->Elements[i/2];
    }
    
    heap->Elements[i]=go;
}

void Down(PriorityQueue heap,int k,int size){
    
    int i,child;
    int go = heap->Elements[k];
    
    for (i = k; i * 2 <= size; i = child)
    {
        child = i * 2;
        if (child != size && heap->Elements[child + 1] >= heap->Elements[child])
        {
            child++;
        }
        
        if (heap->Elements[child] > go)
            heap->Elements[i] = heap->Elements[child];
        else
            break;
    }
    heap->Elements[i] = go;
}

void PrintHeap(PriorityQueue heap){
    
    int i;
    
    if(IsEmpty(heap)){
        
        printf("Priority queue is EMPTY! Can't PRINT!\n");
        return;
    }
    
    for(i=1;i<=heap->Size;i++){
        printf("%d ",heap->Elements[i]);
    }
    printf("\n");
    
}

int main(){
    
    
    PriorityQueue heap=NULL;
    
    heap=CreateHeap(100001);
    
    int ck;
    int input;
    
    while(1){
        
        scanf("%d",&ck);
        
        if(ck==1){
            scanf("%d",&input);
            heap->Size++;
            Insert(heap, input);
        }
        else if(ck==2){
            int max=DeleteMax(heap);
            heap->Size--;
            printf("%d ",max);
        }
        else if(ck==3){
            int tmp;
            scanf("%d %d",&input,&tmp);
            
            if(heap->Elements[input]<tmp){
                heap->Elements[input]=tmp;
                Up(heap,input);
            }
            else{
                heap->Elements[input]=tmp;
                Down(heap,input,heap->Size);
            }
        }
        else{
            PrintHeap(heap);
            return 0;
        }
    }
    
}