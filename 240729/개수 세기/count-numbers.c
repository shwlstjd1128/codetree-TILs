#include <stdio.h>

int main() {
	// 여기에 코드를 작성해주세요.
	int a, b;
	int c[100];
	scanf("%d %d", &a, &b);
	int idx = 0;
	for (int i = 0; i < a; i++) {
		scanf("%d", &c[i]);
		if (c[i] == b) {
			idx++;
		}
	}
	printf("%d", idx);
	return 0;
}