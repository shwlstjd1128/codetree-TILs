#include <stdio.h>

int main() {

    int tem, tem1,tem2;
    char c,c1,c2;
    
    scanf(" %c %d",&c,&tem);
    scanf(" %c %d",&c1,&tem1);
    scanf(" %c %d",&c2,&tem2);

    if(c=='Y' && tem >= 37){
        if((c1 =='Y' && tem2>=37) || (c2=='Y' && tem2>=37))
        printf("E");
        else
        printf("N");
    }
    else if(c1=='Y' && tem1>=37 && c2=='Y' && tem2>=37)
    printf("E");
    else
    printf("N");
    return 0;
}