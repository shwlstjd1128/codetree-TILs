#include <stdio.h>
int main(){
	int n,q;
	scanf("%d %d", &n,&q);
	int a[100];

	for(int i  =0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i<q; i++){
		int type;
		scanf("%d", &type);

		if(type == 1){
			int x;
			scanf("%d", &x);

			printf("%d\n", a[x-1]);
		}

		else if(type == 2){
			int x;
			scanf("%d", &x);

			int idx = 0;
			for(int j = 0; j<n; j++){
				if(a[j] == x){
				idx = j;
				break;
				}
			}
			printf("%d\n", idx+1);
		}
		else{
			int x,y;
			scanf("%d %d", &x,&y);
			for(int j = x -1; j<y; j++){
				printf("%d ", a[j]);
			}
			printf("\n");
		}
	}
}