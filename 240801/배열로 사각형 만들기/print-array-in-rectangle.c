#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[5][5];
    
    for(int i = 0; i< 5; i++){
        a[i][0] = 1;
        a[0][i] = 1;
    }

    for(int i = 1; i<5; i++){
        for(int j = 1; j<5; j++){
            a[i][j] = a[i][j-1] + a[i-1][j];
        }
    }

    for(int i = 0; i< 5; i++){
        for(int j = 0; j<5; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}