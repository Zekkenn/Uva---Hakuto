#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, int> memo;
    int cases, snows, maxi, a, b, tmp;
    scanf("%d", &cases);
    for( int i = 0; i < cases; i++){
        memo.clear();
        maxi = -1; a = 0; b = 0;
        scanf("%d", &snows);
        for (int j = 0; j < snows; j++){
            scanf("%d", &tmp);
            if (memo.find(tmp) == memo.end()){
                memo[tmp] = b;
            } else {
                maxi = (maxi < b-a)? b-a : maxi;
                if (a<= memo[tmp] && memo[tmp]<b){
                    a = memo[tmp]+1;
                } memo[tmp] = b;
            }b++;
        } maxi = (maxi < b-a)? b-a : maxi;
        printf("%d\n", maxi);
    }
    return 0;
}
