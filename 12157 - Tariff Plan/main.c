#include<stdio.h>

int mile(int xmin){
    return ((xmin/30)+1)*10;
}

int juice(int xmin){
    return ((xmin/60)+1)*15;
}

int main(){
    int c, nums, res1, res2, n, i=0;
    scanf("%d", &c);
    while (c-- >0){
        scanf("%d", &nums); res1=0; res2 = 0; i++;
        while (nums-- > 0){
            scanf("%d", &n); res1+=mile(n); res2+=juice(n);
        }
        if (res1 == res2) printf("Case %d: Mile Juice %d\n", i, res1);
        else if (res1 < res2) printf("Case %d: Mile %d\n", i, res1);
        else printf("Case %d: Juice %d\n", i, res2);
    }
    return 0;
}
