#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<string> a, vector<string> b) {
	if (a[0] != b[0]) return stoi(a[0]) < stoi(b[0]);
	else return stoi(a[2]) < stoi(b[2]);
}

int main() {
	int N;
	vector<vector<string>> members;
	string age, name;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		members.push_back({ age, name, to_string(i) });
	}
	sort(members.begin(), members.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << members[i][0] << " " << members[i][1] << "\n";
	}
}