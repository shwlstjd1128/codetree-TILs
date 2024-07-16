#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; //a는 중간 b는 기말
    int tmp = 0;
    scanf("%d %d", &a,&b);
    if(a >= 90){
        tmp = 1;
    }
    if(tmp == 1 && b >= 95){
        printf("100000");
    }
    else if(tmp == 1 && b >= 90){
        printf("50000");
    }
    else{
        printf("0");
    }
    return 0;
}