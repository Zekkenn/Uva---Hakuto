#include<bits/stdc++.h>
using namespace std;
typedef map<int, double> Map;

int main(){
	int months, aum, i, j;
	long double sum, downP, debt, inte, worth, inteT;
	bool cond;
	scanf("%d %Lf %Lf %d", &months, &downP, &debt, &aum);
	while (months >= 0){
		Map dic;
		for(i = 0; i < aum; i++){ scanf("%d %Lf", &j, &inte); dic[j] = inte; }
		worth = (downP + debt)*(1-dic[0]); cond = 1; sum = debt/months; inte = dic[0];
		for(i = 1; i <= months && worth < debt; i++){
			if (dic[i]) inte = dic[i];
			debt -= sum; worth *= (1-inte);
		}
		if(i==2) printf("%d month\n", i-1);
		else printf("%d months\n", i-1);
		scanf("%d %Lf %Lf %d", &months, &downP, &debt, &aum);
	}
	return 0;
}
