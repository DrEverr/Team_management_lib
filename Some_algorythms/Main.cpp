#include<iostream>
#include "usefull_algorythms.h"

using namespace std;

int main(int argc, char** argv) {
	vector<int> groupSizes;
	//vector<string> names;
	vector<int> ids;
	int s;

	cout << "Put sizes of teams (0 end inputs): ";
	cin >> s;
	while (s) {
		groupSizes.push_back(s);
		cin >> s;
	}

	int tmp;
	cout << "Put number of participants: ";
	cin >> tmp;
	while (tmp) {
		ids.push_back(tmp);
		--tmp;
	}

	/*
	string tmp;
	cout << "Put names of people (write ... to stop inputing): ";
	cin >> tmp;
	while (tmp.compare("...")) {
		names.push_back(tmp);
		cin >> tmp;
	}*/

	//PrintVecOfVec(SelectedGroups(groupSizes, names));
	
	PrintVecOfVec(SelectedGroups(groupSizes, ids));
	return 0;
}