#include <iostream>
using namespace std;

int main() {
	int ESM[3] = { 1,1,1 }, E, S, M, year = 1;
	cin >> E >> S >> M;

	while (true) {
		if (ESM[0] == E && ESM[1] == S && ESM[2] == M) break;

		year++;
		for (int i = 0; i < 3; i++) {
			ESM[i] ++;
		}

		if (ESM[0] == 16) ESM[0] = 1;
		if (ESM[1] == 29) ESM[1] = 1;
		if (ESM[2] == 20) ESM[2] = 1;
	}
	cout << year;
}