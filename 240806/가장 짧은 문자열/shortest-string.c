#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char a[20];
    char b[20];
    char c[20];

    scanf("%s %s %s", &a,&b,&c);
    int max = strlen(a);

    if(max < strlen(b)){
        max = strlen(b);
    }
    if(max < strlen(c)){
        max = strlen(c);
    }

    int min = strlen(a);

    if(min > strlen(b))
        min = strlen(b);
    if(min > strlen(c))
        min = strlen(c);
    printf("%d\n", max-min);
    return 0;
}