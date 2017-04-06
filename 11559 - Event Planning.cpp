#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, b, h, w, i, j, cost, beds, tmp, maxi, t;
	while( scanf("%d %d %d %d", &n, &b, &h, &w) != EOF ){
		maxi = 3000000; cost = -1;
		for(i = 0; i < h; i++){
			scanf("%d", &beds);
			for(j = 0; j < w; j++){
				scanf("%d", &tmp);
				t = beds*n;
				if (tmp >= n && t <= b && t < maxi) {
					cost = t; maxi = t;
				}
			}
		}
		if(cost == -1) printf("stay home\n");
		else printf("%d\n", cost);
	}
	return 0;
}
