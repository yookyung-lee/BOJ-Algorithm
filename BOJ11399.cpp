#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>v;
    int N;
    int total = 0;
    cin >> N;
    int time[100001];

    for (int i = 0; i < N; i++) {
        cin >> time[i];
        v.push_back(time[i]);

    }

    sort(v.begin(), v.end());

    int result[10001] = { 0, };

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            result[i] += v[j];
        }

    }
    for (int i = 0; i < N; i++) {
        total += result[i];

    }

    cout << total;
}

