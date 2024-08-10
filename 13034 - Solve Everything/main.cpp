//
// Created by Sebastian Moreno Rodriguez on 7/08/24.
//
#include<bits/stdc++.h>

int main() {

    int cases, n, set = 1; bool ans;
    scanf("%d", &cases);

    while ( cases-- ) {
        ans = true;
        for ( int i = 0; i < 13; i++ ) {
            scanf("%d", &n);
            ans = ans && not n == 0;
        }
        if (ans) printf("Set #%d: Yes\n", set);
        else printf("Set #%d: No\n", set);
        set++;
    }

}