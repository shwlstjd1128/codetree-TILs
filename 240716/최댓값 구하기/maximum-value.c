#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    int max;
    scanf("%d %d %d", &a,&b,&c);
    max = a;
    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }
    printf("%d", max);
    return 0;
}