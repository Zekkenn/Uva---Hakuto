#include<stdio.h>

int main(){
	int n, m, c, dev[25], i, j, tot, max, end, k = 1;
	scanf("%d %d %d", &n, &m, &c);
	while(n!=0 || m!=0 || c!=0){
		printf("Sequence %d\n", k); k++;
		tot = 0; max = -1; end = 0;
		for(i = 0; i < n; i++){ scanf("%d", &dev[i]); }
		for(i = 0; i < m; i++){
			scanf("%d", &j); tot += dev[j-1]; dev[j-1]*=-1;
			if(tot > c) end = 1;
			else if(max < tot) max = tot;
		}
		if(end) printf("Fuse was blown.\n");
		else printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n", max);
		scanf("%d %d %d", &n, &m, &c);
		printf("\n");
	}
	return 0;
}
