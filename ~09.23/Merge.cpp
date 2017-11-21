//2015004375_김다빈_A

#include<stdio.h>
#include<stdlib.h>
#define MAX 100000

typedef int ElementType;

int tmpArr[MAX];
int input[MAX];

void Merge(ElementType A[],ElementType TmpArray[],int Lpos,int Rpos,int RightEnd){
    
    int i,LeftEnd,NumElements,TmpPos,save;
    
    save=Lpos;
    LeftEnd=Rpos-1;
    TmpPos=Lpos;
    NumElements=RightEnd-Lpos+1;
    
    while(Lpos<=LeftEnd&&Rpos<=RightEnd){
        
        if(A[Lpos]<=A[Rpos]) TmpArray[TmpPos++]=A[Lpos++];
        else TmpArray[TmpPos++]=A[Rpos++];
    }
    
    while(Lpos<=LeftEnd) TmpArray[TmpPos++]=A[Lpos++];
    
    while (Rpos <= RightEnd) TmpArray[TmpPos++] = A[Rpos++];
    
    for (i = 0; i < NumElements; i++, RightEnd--) A[RightEnd] = TmpArray[RightEnd];
    
}

void Msort_recur(ElementType A[],ElementType TmpArray[],int Left,int Right){
    
    int Center;
    
    if(Left<Right){
        Center=(Left+Right)/2;
        Msort_recur(A, TmpArray, Left, Center);
        Msort_recur(A, TmpArray, Center+1, Right);
        Merge(A, TmpArray, Left, Center+1, Right);
    }
}

int main(){
    
    
    int n,i,j;
    scanf("%d",&n);
    
    int cnt=0;
    
    for(i=0;i<n;i++){
        
        scanf("%d",&input[i]);
        cnt++;
    }
    
    Msort_recur(input,tmpArr,0,cnt-1);
    
    for(j=n-1;j>=0;j--){
        
        printf("%d\n",tmpArr[j]);
    }
    
    return 0;
    
}