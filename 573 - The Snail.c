#include<stdio.h>

int main(){
	int H, U, D, F, end, day, t; double tot, fac, up;
	scanf("%d %d %d %d", &H, &U, &D, &F);
	while(H!=0 || D!=0 || U!=0 || F!=0){
		tot = 0; up = U; day = 0; end = 1; fac = ((double)F)/100; fac = up*fac;
		while(end){
			day++; tot += up;
			if(tot > H) end = 0;
			up = (up  - fac < 0)? 0 : up-fac; tot-=D;
			if(tot < 0) end = 0;
			
		}
		if(tot+D > H) printf("success on day %d\n", day);
		else printf("failure on day %d\n", day);
		scanf("%d %d %d %d", &H, &U, &D, &F);
	}
	return 0;
}
