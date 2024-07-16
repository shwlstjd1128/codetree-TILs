#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int min;
    min = a;
    if(min >= b){
        min = b;
        printf("%d", min);
    }
    if(min >= c){
        min = c;
        printf("%d", min);
    }
    return 0;
}