#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str1[1000];
    char str2[1000];
    
    scanf("%s",str1);
    scanf("%s",str2);
    
    if (strlen(str1) >= strlen(str2)) printf("go\n");
    else printf("no\n");
}//2-10 아!