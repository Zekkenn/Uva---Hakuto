#include<bits/stdc++.h>

using namespace std;

typedef map<unsigned int, unsigned int> Map;
static Map m;

unsigned int solve(unsigned int num){
	if (m[num]){
		return m[num];
	} else {
		if ( num <= 1) return 1;
		else {
			unsigned int temp_num = 0;
			if ( !(num%2) ) temp_num = 1 + solve(num>>1);
			else temp_num = 2 + solve( (3*num + 1)>>1 );
			m[num] = temp_num;
			return temp_num;
		}
	}
}

int main(){
	int i, j;
	unsigned int max, res, temp_i, temp_j;
	while ( scanf("%d %d", &i, &j) != EOF ){
		max = 0;
		if (i > j) {temp_i = j; temp_j = i;}
		else {temp_i = i; temp_j = j;}
		while ( temp_i <= temp_j ){
			res = solve(temp_i);
			if(max < res) max = res;
			temp_i++;
		}
		printf("%d %d %u\n", i, j, max);
	}
	return 0;
}
