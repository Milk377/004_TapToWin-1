#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

	string answer = "";

	unordered_map<string, int> m1;

	for (auto& i : participant) { m1.insert::value_type(i, 1); }

}