#include<stdio.h>

int main(){
    
    char arr[333335];
    scanf("%s",arr);
    
    switch(arr[0]){
        case '1':
            printf("1");
            break;
        case '2':
            printf("10");
            break;
        case '3':
            printf("11");
            break;
        case '4':
            printf("100");
            break;
        case '5':
            printf("101");
            break;
        case '6':
            printf("110");
            break;
        case '7':
            printf("111");
            break;
        default:
            printf("");
            break;
    }
    
    
    for(int i=1;arr[i]!='\0';i++){
        
        switch(arr[i]){
            case '1':
                printf("001");
                break;
            case '2':
                printf("010");
                break;
            case '3':
                printf("011");
                break;
            case '4':
                printf("100");
                break;
            case '5':
                printf("101");
                break;
            case '6':
                printf("110");
                break;
            case '7':
                printf("111");
                break;
            default:
                printf("000");
                break;
        }
    }
}//3.8진수 2진수