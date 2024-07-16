#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,sum;
    scanf("%d", &n);
    sum = n*n;
    if(n <5){
        printf("%d\n", sum);
        printf("tiny");
    }
    else{
        printf("%d", sum);
    }
    return 0;
}