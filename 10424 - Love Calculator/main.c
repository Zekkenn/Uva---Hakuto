#include<stdio.h>

int main(){
	int n1, n2; float res;
	char name[30];
	while(gets(name)){
		n1 = solve(name);
		gets(name);
		n2 = solve(name);
		if(n1 < n2) res = ((float)n1/(float)n2)*100;
		else res = ((float)n2/(float)n1)*100;
		if (n1 != 0 || n2 != 0) printf("%.2f %%\n", res);
		else printf("\n");
	}
	return 0;
}

int solve(char name[]){
	int i = 0, sum = 0, n;
	while(name[i]){
		n = (int)name[i]; i++; 
		sum += ( 97 <= n && n <= 122)? n-96 : (65 <= n && n <= 90)? n-64 : 0;
	}
	return rec(sum);
}

int rec(int sum){
	int tmp=0, res = 0;
	if( sum <= 9){
		res = sum;
	} else {
		while(sum != 0){ tmp+= sum%10; sum = sum/10; }
		res = rec(tmp);
	}
	return res;
}
