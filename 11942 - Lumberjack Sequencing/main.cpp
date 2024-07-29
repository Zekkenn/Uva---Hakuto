#include<bits/stdc++.h>

int main(){
	int cases, i; bool ord1, ord2; int nums[15];
	scanf("%d", &cases);
	printf("Lumberjacks:\n");
	while(cases--){
		ord1 = 1; ord2 = 1;
		for(i = 0; i < 10; i++){ scanf("%d", &nums[i]); }
		for(i = 0; i < 9 && (ord1 || ord2); i++){ 
			if(nums[i] <= nums[i+1]) ord2 = 0;
			if(nums[i] >= nums[i+1]) ord1 = 0;
		}
		if(ord1 || ord2) printf("Ordered\n");
		else printf("Unordered\n");
	}
	return 0;
}
