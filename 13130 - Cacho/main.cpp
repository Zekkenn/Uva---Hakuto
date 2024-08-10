//
// Created by Sebastian Moreno Rodriguez on 10/08/24.
//
#include<bits/stdc++.h>

using namespace std;

int main() {

    int cases;
    int values[6];
    bool valid;

    scanf("%d", &cases);

    while ( cases-- ) {
        valid = true;
        scanf("%d", &values[0]);
        for (int i = 1; i < 5; i++) {
            scanf("%d", &values[i]);
            valid = valid and values[i-1] + 1 == values[i];
        }
        if ( valid ) printf("Y\n");
        else printf("N\n");
    }
}
