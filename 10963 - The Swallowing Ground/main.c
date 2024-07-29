#include<stdio.h>

int main(){
	int cases, column, y1, y2, tmp; 
	int res;
	scanf("%d", &cases);
	while(cases--){
		scanf("%d", &column); tmp = -1; res = 1;
		while(column--){
			scanf("%d %d", &y1, &y2);
			if(tmp == -1){
				tmp = y1-y2;
			} else {
				res = res && tmp == y1-y2;
			}
		}
		if(res) printf("yes\n");
		else printf("no\n");
		if(cases!=0) printf("\n");
	}
	return 0;
}
