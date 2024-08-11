//
// Created by Sebastian Moreno Rodriguez on 11/08/24.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, w;
    while (cin >> h >> w) {

        int total = 0;
        for (int i = 0; i < h; ++i) {
            string line;
            cin >> line;

            bool count = false;
            for (char c : line) {
                if ( count && c == '.' ) total += 2;
                else if ( count && c != '.' ) {
                    total += 1;
                    count = false;
                } else if ( c != '.' ) {
                    total += 1;
                    count = true;
                }
            }
        }
        cout << (total >> 1) << "\n";
    }
    return 0;
}