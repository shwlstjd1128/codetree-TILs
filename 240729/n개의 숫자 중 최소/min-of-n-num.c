#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int a[100];
    for(int i =0; i< n;i++){
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int cnt = 1;
    for(int i = 0; i<n; i++){
        if(min>a[i]){
            min = a[i];
            cnt++;
        }
    }
    printf("%d %d", min, cnt);
    return 0;
}