#include<stdio.h>

int main(){
    char input[15] = { '\0', };
    int i = 0;
    int sum = 0;
    
    scanf("%s", input);
    
    for (i = 0; input[i] != '\0'; i++){
        switch (input[i]){
            case 'A':
            case 'B':
            case 'C':
                sum += 3;
                break;
            case 'D':
            case 'E':
            case 'F':
                sum += 4;
                break;
            case 'G':
            case 'H':
            case 'I':
                sum += 5;
                break;
            case 'J':
            case 'K':
            case 'L':
                sum += 6;
                break;
            case 'M':
            case 'N':
            case 'O':
                sum += 7;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                sum += 8;
                break;
            case 'T':
            case 'U':
            case 'V':
                sum += 9;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                sum += 10;
                break;
        }
    }
    
    printf("%d", sum);
}//2-16.다이얼