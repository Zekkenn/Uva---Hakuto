#include<stdio.h>
#include<stdlib.h>

char cad[1000050];
int mem[1000050];

int main(){
	int cas, i, j, k, c=0, h;
	while(scanf("%s", &cad) != EOF){
		proce();
		scanf("%d", &cas); c++;
		printf("Case %d:\n", c);
		while(cas--){
			scanf("%d %d", &i, &j);
			if(find(i, j)) printf("Yes\n");
			else printf("No\n");	
		}
	}
	return 0;
}

int proce(){
	int i = 1;
	mem[0] = (cad[0]=='1');
	while(cad[i]){
		mem[i] = mem[i-1] + (cad[i]=='1');
		i++;
	}
	return 0;
}

int find(int i, int j){
	return (j-i == mem[j]-mem[i] || mem[j]-mem[i]==0) && cad[j]==cad[i];
}
