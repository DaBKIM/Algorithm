#include<stdio.h>

int main(){
    
    double day,math,korean,day_m,day_k;
    scanf("%lf %lf %lf %lf %lf",&day,&math,&korean,&day_m,&day_k);
    
    math=math/day_m;
    
    if(math-(int)math!=0) math=(int)math+1;
    else math=(int)math;
    
    korean=korean/day_k;
    
    if(korean-(int)korean!=0) korean=(int)korean+1;
    else korean=(int)korean;
    
    if(math>=korean)printf("%.0lf\n",day-math);
    else printf("%.0lf\n",day-korean);
}//2-14.방학숙제