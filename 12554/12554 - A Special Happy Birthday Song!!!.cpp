#include<bits/stdc++.h>

using namespace std;

int main(){
	char temp[][15] = {"Happy", "birthday", "to", "you","Happy", "birthday", "to", "you","Happy", "birthday", "to", "Rujia","Happy", "birthday", "to", "you"};
	char words[101][101]; int n,i;
	scanf("%d",&n);
	for(i = 0; i < n; i++){ scanf("%s",&words[i]); printf("%s: %s\n", words[i], temp[i%16]); }
	while(i%16){
		printf("%s: %s\n", words[i%n], temp[i%16]); i++;
	}
	return 0;
}
