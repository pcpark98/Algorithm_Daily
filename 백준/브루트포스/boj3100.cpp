#include <iostream>
#include <vector>
using namespace std;

int main() {
	char input;

	vector<vector<int>> firstRow, secondRow, thirdRow, firstCol, secondCol, thirdCol;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> input;
			if (i < 2) {
				if (firstRow.empty()) firstRow.push_back({ 1,input - 65 });
				else {
					int flag = 0;
					for (int k = 0; k < firstRow.size(); k++) {
						if (firstRow[k][1] == input - 65) {
							firstRow[k][0]++;
							flag = 1;
							break;
						}
					}
					if (flag == 0) firstRow.push_back({ 1,input - 65 });
				}
			}

			else if (i < 4) {
				if (secondRow.empty()) secondRow.push_back({ 1,input - 65 });
				else {
					int flag = 0;
					for (int k = 0; k < secondRow.size(); k++) {
						if (secondRow[k][1] == input - 65) {
							secondRow[k][0]++;
							flag = 1;
							break;
						}
					}
					if (flag == 0) secondRow.push_back({ 1,input - 65 });
				}
			}

			else {
				if (thirdRow.empty()) thirdRow.push_back({ 1,input - 65 });
				else {
					int flag = 0;
					for (int k = 0; k < thirdRow.size(); k++) {
						if (thirdRow[k][1] == input - 65) {
							thirdRow[k][0]++;
							flag = 1;
							break;
						}
					}
					if (flag == 0) thirdRow.push_back({ 1,input - 65 });
				}
			}


			if (j < 3) {
				if (firstCol.empty()) firstCol.push_back({ 1,input - 65 });
				else {
					int flag = 0;
					for (int k = 0; k < firstCol.size(); k++) {
						if (firstCol[k][1] == input - 65) {
							firstCol[k][0]++;
							flag = 1;
							break;
						}
					}
					if (flag == 0) firstCol.push_back({ 1,input - 65 });
				}
			}

			else if (j < 6) {
				if (secondCol.empty()) secondCol.push_back({ 1,input - 65 });
				else {
					int flag = 0;
					for (int k = 0; k < secondCol.size(); k++) {
						if (secondCol[k][1] == input - 65) {
							secondCol[k][0]++;
							flag = 1;
							break;
						}
					}
					if (flag == 0) secondCol.push_back({ 1,input - 65 });
				}
			}

			else {
				if (thirdCol.empty()) thirdCol.push_back({ 1,input - 65 });
				else {
					int flag = 0;
					for (int k = 0; k < thirdCol.size(); k++) {
						if (thirdCol[k][1] == input - 65) {
							thirdCol[k][0]++;
							flag = 1;
							break;
						}
					}
					if (flag == 0) thirdCol.push_back({ 1,input - 65 });
				}
			}
		}
	}

	int min = 55;
	for (int i = 0; i < firstRow.size(); i++) {
		for (int j = 0; j < secondRow.size(); j++) {
			int sameFlag = 0;
			if ((firstRow[i][1] == secondRow[j][1]) && firstRow.size() == 1 && secondRow.size() == 1) sameFlag = 18;
			else if (firstRow[i][1] == secondRow[j][1]) continue;

			if (18 - firstRow[i][0] + 18 - secondRow[j][0] > min || sameFlag > min) continue;
			for (int k = 0; k < thirdRow.size(); k++) {
				if ((secondRow[j][1] == thirdRow[k][1]) && sameFlag == 18) {
					if (min > 18) min = 18;
					continue;
				}

				else if ((secondRow[j][1] == thirdRow[k][1]) && secondRow.size() == 1 && thirdRow.size() == 1) {
					int current = 18 - firstRow[i][0] + 18;
					if (current < min) min = current;
				}

				else if (secondRow[j][1] == thirdRow[k][1]) continue;
				int current = 18 - firstRow[i][0] + 18 - secondRow[j][0] + 18 - thirdRow[k][0];
				if (current < min) min = current;
			}
		}
	}

	for (int i = 0; i < firstCol.size(); i++) {
		for (int j = 0; j < secondCol.size(); j++) {
			int sameFlag = 0;
			if ((firstCol[i][1] == secondCol[j][1]) && firstCol.size() == 1 && secondCol.size() == 1) sameFlag = 18;
			else if (firstCol[i][1] == secondCol[j][1]) continue;

			if (18 - firstCol[i][0] + 18 - secondCol[j][0] > min || sameFlag > min) continue;
			for (int k = 0; k < thirdCol.size(); k++) {
				if ((secondCol[j][1] == thirdCol[k][1]) && sameFlag == 18) {
					if (min > 18) min = 18;
					continue;
				}

				else if ((secondCol[j][1] == thirdCol[k][1]) && secondCol.size() == 1 && thirdCol.size() == 1) {
					int current = 18 - firstCol[i][0] + 18;
					if (current < min) min = current;
				}

				else if (secondCol[j][1] == thirdCol[k][1]) continue;
				int current = 18 - firstCol[i][0] + 18 - secondCol[j][0] + 18 - thirdCol[k][0];
				if (current < min) min = current;
			}
		}
	}
	cout << min;
}