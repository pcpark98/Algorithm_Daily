#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<long long> arr;
    int N, K;
    long long input;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());
    cout << arr[K - 1];
}