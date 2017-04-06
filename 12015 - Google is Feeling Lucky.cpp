#include<bits/stdc++.h>

using namespace std;

int main(){
	int cases, i, max, j, tmp; char words[10][101], word[101];
	scanf("%d", &cases);
	for(int k = 1; k <= cases; k++){
		j = -1; max = -1;
		for(i = 0; i < 10; i++){
			scanf("%s %d", &word, &tmp);
			if(tmp > max){ j = 0; strcpy(words[j], word); max = tmp; }
			else if(tmp == max){ j++; strcpy(words[j], word); }
		}
		printf("Case #%d:\n", k);
		for(i = 0; i <= j; i++){ printf("%s\n", words[i]); }
	}
	return 0;
}
