#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
	int n, m, porp, k=0, i, j; char tmp[85], res[85], otmp[85]; float price, max, pmin;
	scanf("%d %d", &n, &m); gets(tmp);
	while(n!=0 || m!=0){
		max = -1.0; pmin = 9999999; k++;
		for(i = 0; i < n; i++){ gets(tmp); }
		for(i = 0; i < m; i++){
			gets(otmp); scanf("%f %d", &price, &porp);gets(tmp);
			for(j = 0; j < porp; j++){ gets(tmp); }
			if(max < porp || (max == porp && pmin > price) ){ 
				max = porp; pmin = price; strcpy(res, otmp); 
			}
		}
		printf("RFP #%d\n%s\n", k, res);
		scanf("%d %d", &n, &m);gets(tmp);
		if(n!=0 || m!=0) printf("\n");
	}
	return 0;
}
