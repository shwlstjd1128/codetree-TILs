#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 여기에 코드를 작성해주세요.
	int a[100];
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		scanf(" %d", &a[i]);
		cnt++;
		if (a[i] == 999 || a[i] == -999) {
			break;
		}
	}
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < cnt; i++) {
        if(a[i] == 999 || a[i] == -999)
            break;
        if(a[i] > max){
            max = a[i];            
        }
        if(a[i]<min){
            min = a[i];
        }
    }
	printf("%d %d", max, min);
	return 0;
}