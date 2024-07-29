#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[3][3];
    int b[3][3];
    int c[3][3];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}