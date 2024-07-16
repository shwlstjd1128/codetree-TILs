#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int c;
    scanf("%d", &c);
    if(c <0 ){
        printf("ice");
    }
    else if(c >= 100){
        printf("vapor");
    }
    else
        printf("water");
    return 0;
}