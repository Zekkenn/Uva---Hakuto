//
// Created by Sebastian Moreno Rodriguez on 11/08/24.
//
#include<bits/stdc++.h>
using namespace std;

int main() {

    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases;
    cin >> cases;

    while (cases--) {
        string result;
        cin >> result;

        unsigned int total = 0, i = 0;
        for (char c : result) {
            if (c == 'X') i = 0;
            else {
                i++;
                total += i;
            }
        }

        cout << total << "\n";
    }

    return 0;
}