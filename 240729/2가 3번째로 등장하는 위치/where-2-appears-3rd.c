#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int count = 0;
	int target = 2;

	// 첫 번째 줄에서 정수의 개수 n 입력 받기
	scanf("%d", &n);

	int arr[100];

	// 두 번째 줄에서 n개의 숫자 입력 받기
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	// 배열을 순회하며 2의 등장 횟수 세기
	for (int i = 0; i < n; i++) {
		if (arr[i] == target) {
			count++;
			if (count == 3) {
				// 3번째 등장했을 때 위치 출력
				printf("%d\n", i + 1);
				return 0;
			}
		}
	}

	return 0;
}