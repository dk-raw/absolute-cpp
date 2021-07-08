#include <iostream>
#include <vector>
#include <string>
using namespace std;

int absolute(int a) {
	if (a < 0) return -a;
	return a;
}

vector<char> absolute2(int a) {
	vector<char> res;
	for (int i = 0; i < to_string(a).size(); i++) if (to_string(a)[i] != '-') res.push_back(to_string(a)[i]);
	return res;
}

int absolute3(int a) { return sqrt(a * a); }

int absolute4(int a) {
	string newstr = "";
	for (int i = 0; i < to_string(a).length(); i++) if (to_string(a)[i] != '-') newstr += string(1, to_string(a)[i]);
	return stoi(newstr);
}

int main()
{
	cout << abs(-65) << endl;
	auto result = absolute(-65);
	cout << result << endl;
	auto result2 = absolute2(-65);
	for (auto item : result2) cout << item;
	cout << endl;
	auto result3 = absolute3(-65);
	cout << result3 << endl;
	auto result4 = absolute4(-65);
	cout << result4 << endl;
}