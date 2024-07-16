#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a; // 중심
    int b,c,d,e; // 크기 비교 실험

    scanf("%d", &a);
    scanf("%d %d %d %d", &b,&c,&d,&e);

    if(a>b){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
        if(a>c){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
        if(a>d){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
        if(a>e){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}