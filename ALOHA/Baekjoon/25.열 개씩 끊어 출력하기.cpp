#include<stdio.h>
#include<string.h>

int main(){
    
    char num[105];
    scanf("%s",num);
    
    for(int i=0;i<strlen(num);i++){
        
        printf("%c",num[i]);
        if((i+1)%10==0) printf("\n");
    }
}//25. 열개씩 끊어서 출력하기