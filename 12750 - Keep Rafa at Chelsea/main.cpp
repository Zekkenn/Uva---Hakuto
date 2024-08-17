//
// Created by Sebastian Moreno Rodriguez on 17/08/24.
//
#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases, n;
    cin >> cases;

    for (int c = 1; c <= cases; ++c) {
        int loses = 0, endGame = -1;
        cin >> n; char result;
        for (int i = 0; i < n; ++i) {
            cin >> result;
            loses = result == 'W' ? 0 : loses + 1;
            if ( endGame == -1 && loses >= 3 ) endGame = i + 1;
        }
        cout << "Case " << c << ": " << (endGame == -1 ? "Yay! Mighty Rafa persists!" : to_string(endGame)) << "\n";
    }

    return 0;
}
