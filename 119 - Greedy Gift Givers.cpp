#include<bits/stdc++.h>
#include<string.h>
#include<map>

using namespace std;

int main(){
	char names[12][15], name[15]; 
	int tmp, res[12], money, nPer, i, j, subTot, end = 1; 
	map <string, int> mp;
	scanf("%d", &tmp);
	while(end){
		for(i=0; i < tmp; i++){ scanf("%s", &name); mp[name] = i; res[i]=0; strcpy(names[i], name);}
		for(i = 0; i < tmp; i++){ 
			scanf("%s %d %d", &name, &money, &nPer); subTot = (nPer)? money/nPer : 0;
			res[mp[name]] -= subTot*nPer;
			for(j = 0; j < nPer; j++){ scanf("%s", &name); res[mp[name]] += subTot; }
		}
		for(i = 0; i < tmp; i++){
			printf("%s %d\n", names[i], res[i]);
		}
		if  (scanf("%d", &tmp) != EOF) printf("\n");
		else end = 0;
	}
	return 0;
}
