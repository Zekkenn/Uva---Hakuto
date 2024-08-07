//
// Created by Sebastian Moreno Rodriguez on 3/08/24.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int base, n, total;

    while ( scanf("%d", &base) != EOF ) {

        total = 0;
        for (int i = 0; i < 5; i++) {
            scanf("%d", &n);
            if ( base == n ) total++;
        }
        printf("%d\n", total);
    }

    return 0;
}
