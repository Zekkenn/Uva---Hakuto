//
// Created by Sebastian Moreno Rodriguez on 12/08/24.
//
#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases, total = 0;
    cin >> cases;

    while (cases--) {

        float l, w, d, we;
        cin >> l >> w >> d >> we;

        int caseResult = (( l <= 56 && w <= 45 && d <= 25 ) || l + w + d <= 125 ) && we <= 7;

        cout << caseResult << "\n";
        total += caseResult;
    }
    cout << total << "\n";
}