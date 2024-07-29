#include<stdio.h>

int main(){
    int a,b, ans;
    scanf("%d %d", &a, &b);
    while (a!= -1 || b != -1){
        ans = (a-b <0)? b-a:a-b;
        printf("%d\n", (100-ans < ans)? 100-ans : ans);
        scanf("%d %d", &a, &b);
    }
    return 0;
}
