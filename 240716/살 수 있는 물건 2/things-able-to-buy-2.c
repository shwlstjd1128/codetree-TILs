#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int c;
    scanf("%d", &c);
    if(c >= 3000){
        printf("book");
    }
    else if(c >= 1000){
        printf("mask");
    }
    else if(c >= 500){
        printf("pen");
    }
    else{
        printf("no");
    }
    return 0;
}