#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char ch[100];
    scanf("%s", &ch);
    char arr[100];
    scanf("%s", &arr);

    printf("%d", strlen(ch) + strlen(arr));
    return 0;
}