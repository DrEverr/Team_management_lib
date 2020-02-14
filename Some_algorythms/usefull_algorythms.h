#pragma once
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

//Prints
/*Takes and prints whole object in very nice form ;-)*/
void PrintVecOfVec(std::vector<std::vector<int>>);

/*Takes vector<string> and prints whole object in very nice form ;-)*/
void PrintVecOfVec(std::vector<std::vector<std::string>>);

//Algorythms
/*Takes vector<int> group sizes to split people, and vector<T> ids for each person
Randomly generates given groups of given ids*/
std::vector<std::vector<int>> SelectedGroups(std::vector<int>, std::vector<int>);

/*Takes vector<int> group sizes to split people, and vector<string> nicks for each person
Randomly generates given groups of given ids*/
std::vector<std::vector<std::string>> SelectedGroups(std::vector<int>, std::vector<std::string>);