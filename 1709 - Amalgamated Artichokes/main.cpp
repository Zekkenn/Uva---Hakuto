//
// Created by Sebastian Moreno Rodriguez on 10/08/24.
//

#include<bits/stdc++.h>
using namespace std;

double price(const int p, const int a, const int b, const int c, const int d, const int k) {
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main() {
    int p, a, b, c, d, n;
    while (scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) != EOF) {

        double diff = 0;
        double base = price(p, a, b, c, d, 1), cPrice;
        for (int i = 2; i <= n; i++) {
            cPrice = price(p, a, b, c, d, i);
            if ( base - cPrice > diff ) diff = base - cPrice;
            else if ( cPrice > base ) base = cPrice;
        }

        printf("%lf\n", diff);
    }
}
