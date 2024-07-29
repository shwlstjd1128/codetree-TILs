#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 여기에 코드를 작성해주세요.
	int n;
	scanf("%d", &n);
	int idx = -1;
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (max == a[i]) {
			cnt++;
		}
	}
	if (cnt >= 2) {
		printf("-1");
	}
	else {
		printf("%d", max);
	}

	return 0;
}