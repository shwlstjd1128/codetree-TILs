#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m; // n이 행 m이 열
    scanf("%d %d", &n,&m);
    int a[100][100];
    int num = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
           a[i][j] = num;
           num +=1;
        }
    }

    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}