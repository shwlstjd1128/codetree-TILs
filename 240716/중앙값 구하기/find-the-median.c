#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    int wndrks;
    scanf("%d %d %d", &a,&b,&c);
    if((a > b && a < c) || (a < b && a> c))
        wndrks = a;
    else if((b < a && b>c) || (b > a && b < c)){
        wndrks = b;
    }
    else{
        wndrks =c;
    }
    printf("%d", wndrks);
    return 0;
}