#include<bits/stdc++.h>

int main(){
	int cases, jumps, i, hj, lj, j;
	int walls[55]; j = 1;
	scanf("%d", &cases);
	while(cases--){
		scanf("%d", &jumps); hj = 0; lj = 0;
		for(i = 0; i < jumps; i++){ scanf("%d", &walls[i]); }
		for(i = 0; i < jumps-1; i++){
			if(walls[i] < walls[i+1]) hj ++; 
			else if(walls[i] > walls[i+1]) lj ++;
		}
		printf("Case %d: %d %d\n", j, hj, lj); j++;
	}
	return 0;
}
