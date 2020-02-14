#include <iostream>
#include "usefull_algorythms.h"

using namespace std;
//Prints
void PrintVecOfVec(vector<vector<int>> vec) {
	cout << "[";
	for (int i = 0; i < vec.size(); i++) {
		cout << "[";
		for (int j = 0; j < vec[i].size(); j++) {
			cout << vec[i][j];
			if (j != (vec[i].size() - 1)) cout << ", ";
		}
		cout << "]";
		if (i != (vec.size() - 1)) cout << ", ";
	}
	cout << "]" << endl;
}

void PrintVecOfVec(vector<vector<string>>vec) {
	cout << "[";
	for (int i = 0; i < vec.size(); i++) {
		cout << "[";
		for (int j = 0; j < vec[i].size(); j++) {
			cout << vec[i][j];
			if (j != (vec[i].size() - 1)) cout << ", ";
		}
		cout << "]";
		if (i != (vec.size() - 1)) cout << ", ";
	}
	cout << "]" << endl;
}

//Algorythms
vector<vector<int>> SelectedGroups(vector<int> groupSizes, vector<int> ids) {
	vector<vector<int>> resoult;
	int SUM = 0;
	srand(time(NULL));

	for (int i = 0; i < groupSizes.size(); i++) {
		SUM += groupSizes[i];
	}
	if (SUM != ids.size()) return resoult;

	for (int i = 0; i < groupSizes.size(); i++) {
		int toFill = groupSizes[i];
		vector<int> temp;
		while (toFill) {
			int selected = (rand() % ids.size());
			temp.push_back(ids[selected]);
			ids.erase(ids.begin() + selected);
			--toFill;
		}
		resoult.push_back(temp);
	}
	return resoult;
}

vector<vector<string>> SelectedGroups(vector<int> groupSizes, vector<string>nicks) {
	vector<vector<string>> resoult;
	int SUM = 0;
	srand(time(NULL));

	for (int i = 0; i < groupSizes.size(); i++) {
		SUM += groupSizes[i];
	}
	if (SUM != nicks.size()) return resoult;

	for (int i = 0; i < groupSizes.size(); i++) {
		int toFill = groupSizes[i];
		vector<string> temp;
		while (toFill) {
			int selected = (rand() % nicks.size());
			temp.push_back(nicks[selected]);
			nicks.erase(nicks.begin() + selected);
			--toFill;
		}
		resoult.push_back(temp);
	}
	return resoult;
}