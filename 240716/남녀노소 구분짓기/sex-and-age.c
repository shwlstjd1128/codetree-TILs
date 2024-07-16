#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int age;
    scanf("%d", &a);
    scanf("%d", &age);

    if(a == 0 && age >= 19){
        printf("MAN");
    }
    else if(a == 0 && a < 19){
        printf("BOY");
    }
    else{
        if(a == 1 && age >= 19){
            printf("WOMAN");
        }
        else if(a == 1 && age < 19){
            printf("GIRL");
        }
    }
    return 0;
}