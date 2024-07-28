#include<stdio.h>

int main(){
	int c, i, j, n, num, max;
	scanf("%d", &c);
	for (i = 0; i < c; i++){
		scanf("%d", &n); max = 0;
		for (j = 0; j < n; j++){
			scanf("%d", &num);
			if (num > max) max = num;
		}
		printf("Case %d: %d\n",i+1 , max);
	}
	return 0;
}
