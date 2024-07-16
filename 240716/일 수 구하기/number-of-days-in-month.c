#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d", &a);
    if(a % 2 == 1){
        printf("31");
    }
    if(a % 2 == 0 && a != 2){
        printf("30");
    }
    else if(a == 2){
        printf("28");
    }
    return 0;
}