#include <stdio.h>

int main() {
    int mat,eng;
    int mat1,eng1;
    scanf("%d %d", &mat,&eng);
    scanf("%d %d", &mat1, &eng1);
    if(mat > mat1 && eng > eng1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}