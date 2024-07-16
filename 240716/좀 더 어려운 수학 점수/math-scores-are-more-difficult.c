#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int mat, eng; //A
    int mat1, eng1; // B
    scanf("%d %d", &mat, &eng);
    scanf("%d %d", &mat1, &eng1);

    if(mat > mat1 && eng > eng1){
        printf("A");
    }
    else if(mat < mat1 && eng <eng1 ){
        printf("B");
    }
    else if(mat == mat1 && eng > eng1){
        printf("A");
    }
    else if(mat > mat1 && eng < eng1 ){
        printf("A");
    }
    else if(mat < mat1 && eng > eng1){
        printf("B");
    }
    else if(mat == mat1 && eng < eng1){
        printf("B");
    }

    return 0;
}