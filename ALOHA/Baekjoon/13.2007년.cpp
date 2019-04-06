#include<stdio.h>

int main(){
    
    int m,d;
    int date[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int res=0;
    scanf("%d %d",&m,&d);
    
    for(int i=0;i<m-1;i++){
        
        res=res+date[i];
        
    }
    
    res=res+d;
    
    int fin=res%7;
    
    switch(fin){
        case 1:
            printf("MON\n");
            break;
        case 2:
            printf("TUE\n");
            break;
        case 3:
            printf("WED\n");
            break;
        case 4:
            printf("THU\n");
            break;
        case 5:
            printf("FRI\n");
            break;
        case 6:
            printf("SAT\n");
            break;
        default:
            printf("SUN\n");
            break;
    }
    
}//13.2007년