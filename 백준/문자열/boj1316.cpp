#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	int N, ans = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		string group = "";
		int flag = 0;

		for (int j = 0; j < input.size(); j++) {
			if (j == 0) group.insert(group.end(), input[j]);
			else if (input[j] != group[group.size() - 1]) group.insert(group.end(), input[j]);
		}

		sort(group.begin(), group.end());

		for (int j = 0; j < group.size() - 1; j++) {
			if (group[j] == group[j + 1]) {
				flag = -1;
				break;
			}
		}

		if (flag == 0) ans++;
	}
	cout << ans;
}