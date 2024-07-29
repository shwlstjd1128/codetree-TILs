// #include <stdio.h>

// int main() {
//     // 여기에 코드를 작성해주세요.
//     int a[4][4];
//     int sum = 0;

//     for(int i = 0; i<4; i++){
//         for(int j = 0; j<4; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for(int i = 0; i<4; i++){
//         sum = 0;
//         for(int j = 0; j<4; j++){
//             sum += a[i][j];
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }
#include <stdio.h>
int main(){
    int a[4][4];
    int sum = 0;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i<4; i++){
        for(int j = 0; j<=i; j++){
            sum += a[i][j];
        }
    }
    printf("%d", sum);
}