#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char ch[100];
    char arr[100];

    scanf("%s", &ch);
    scanf("%s", &arr);

    if(strlen(ch) > strlen(arr))
        printf("%s %d", ch, strlen(ch));
    else if(strlen(ch) < strlen(arr))
        printf("%s %d", arr, strlen(arr));
    else
        printf("same");
    return 0;
}