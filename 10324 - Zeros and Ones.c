#include<stdio.h>

char cad[1000050];

int main(){
	int end = 1, cas, i, j, k, c=0, h;
	while(scanf("%s", &cad) != EOF && end){
		scanf("%d", &cas); c++; 
		printf("Case %d:\n", c);
		for(h = 0; h < cas; h++){
			scanf("%d %d", &i, &j);
			if(j<i){ k = i; i = j; j = k; }
			if(find(i, j)) printf("Yes\n");
			else printf("No\n");	
		}
	}
	return 0;
}

int find(int i, int j){
	int res = 1;
	while(i<j && res){
		res = cad[i]==cad[i+1]; i++;
	}
	return res;
}
