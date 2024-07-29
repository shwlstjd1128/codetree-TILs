#include <stdio.h>

int main() {
    int n;
    int a[100];
    scanf("%d", &n);
    int idx = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i] == 2){
            idx++;
        }
        if(idx == 3){
            break;
        }
    }
    printf("%d", idx);
    return 0;
}