//2015004375_김다빈_A(508호)

#include<stdio.h>
#include<stdlib.h>

int* huff;

int bi_len(int n){
    
    int res=0;
    
    while(n!=0){
        
        n=n/2;
        res++;
        
    }
    
    return res;
}

void heap_sort(int* arr, int n){
    
    if(n<=1) return;
    else if(arr[n]<arr[n/2]){
        
        int tmp=arr[n];
        arr[n]=arr[n/2];
        arr[n/2]=tmp;
        
        heap_sort(arr,n/2);
    }
    
}

void Huffman(int* arr,int n,int where){
    
    if(n<where*2) return;
    else if(n==where*2){
        
        if(arr[n]<arr[where]){
            int tmp=arr[n];
            arr[n]=arr[where];
            arr[where]=tmp;
        }
    }
    else{
        
        if(arr[where*2]<arr[where*2+1]){
            
            if(arr[where*2]<arr[where]){
                
                int tmp=arr[where*2];
                arr[where*2]=arr[where];
                arr[where]=tmp;
                
                Huffman(arr, n, where*2);
            }
        }
        else if(arr[where*2+1]<arr[where]){
            
            int tmp=arr[where*2+1];
            arr[where*2+1]=arr[where];
            arr[where]=tmp;
            
            Huffman(arr, n, where*2+1);
        }
    }
}

void to_huf(int* arr, int n){
    
    int tmp=arr[1];
    arr[1]=arr[n];
    arr[n]=tmp;
    
    Huffman(arr,n-1,1);
}

int Insert(int* arr,int n){
    
    for(int i=1;i<=n;i++){
        
        heap_sort(arr,i);
    }
    return 0;
}

int main(){
    
    int n,last,res=0;
    huff=(int*)malloc(sizeof(int));
    scanf("%d",&n);
    
    char sym[1000];
    
    for(int i=1;i<=n;i++){
        scanf("%s%d",sym,&huff[i]);
    }
    
    scanf("%d",&last);
    
    printf("%d\n",bi_len(n)*last);
    Insert(huff,n);
    
    while(n!=1){
        
        int tmp=huff[1];
        to_huf(huff, n--);
        
        tmp=tmp+huff[1];
        to_huf(huff, n);
        
        res=res+tmp;
        huff[n]=tmp;
        
        heap_sort(huff, n);
        
    }
    
    printf("%d\n",res);
    return 0;
}