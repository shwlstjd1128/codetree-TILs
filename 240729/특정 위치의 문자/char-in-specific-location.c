#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 여기에 코드를 작성해주세요.
	char a[6] = { 'L', 'E', 'B', 'R', 'O', 'S' };
	int idx = -1;
	char ch;
	scanf("%c", &ch);
	for (int i = 0; i < 6; i++) {
		if (a[i] == ch) {
			idx = i;
		}
	}
	if (idx == -1) {
		printf("None");
	}
	else
		printf("%d", idx);
	return 0;
}