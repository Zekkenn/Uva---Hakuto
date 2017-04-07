#include<bits/stdc++.h>
#include<set>

using namespace std;

int main(){
	int k, m, i, cour, c, r, sum, res;
	scanf("%d", &k);
	while(k!=0){
		set<int> courses; res = 1; scanf("%d", &m);
		for(i = 0; i < k; i++){ scanf("%d", &cour); courses.insert(cour); }
		while(m--){
			scanf("%d %d", &c, &r); sum = 0;
			for(i = 0; i < c; i++){ scanf("%d", &cour); sum += (courses.find(cour)==courses.end())? 0 : 1; }
			res = res && (sum >= r);
		}
		if(res) printf("yes\n");
		else printf("no\n");
		scanf("%d", &k);
	}
	return 0;
}
