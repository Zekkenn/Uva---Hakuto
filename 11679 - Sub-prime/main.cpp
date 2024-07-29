#include<stdio.h>

int main(){
	int banks, deb, debs[25], i, b1, b2, deu, res;
	scanf("%d %d", &banks, &deb);
	while(banks!=0 || deb!=0){
		for(i = 0; i<banks; i++){scanf("%d", &debs[i]);}
		for(i = 0; i < deb; i++){
			scanf("%d %d %d", &b1, &b2, &deu);
			debs[b1-1] = debs[b1-1]-deu;
			debs[b2-1] = debs[b2-1]+deu;
		}
		res = 1;
		for(i = 0; i<banks; i++){res = res && debs[i]>= 0;}
		if(res) printf("S\n");
		else printf("N\n");
		scanf("%d %d", &banks, &deb);
	}
	return 0;
}
