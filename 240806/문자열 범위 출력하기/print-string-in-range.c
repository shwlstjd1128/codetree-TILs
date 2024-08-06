#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char ch[100];
    fgets(ch, 100, stdin);

    for(int i = 2; i< 10; i++){
        printf("%c", ch[i]);
    }
    return 0;
}