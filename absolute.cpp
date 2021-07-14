#include <iostream>
#include <vector>
#include <string>
using namespace std;

int absolute(int a) {
	if (a == NULL || to_string(a) == "") return 0;
	if (a < 0) return -a;
	return a;
}

vector<char> absolute2(int a) {
	if (a == NULL || to_string(a) == "") return { 0 };
	vector<char> res;
	for (int i = 0; i < to_string(a).size(); i++) if (to_string(a)[i] != '-') res.push_back(to_string(a)[i]);
	return res;
}

int absolute3(int a) {
	if (a == NULL || to_string(a) == "") return 0;
	return sqrt(a * a);
}

int absolute4(int a) {
	if (a == NULL || to_string(a) == "") return 0;
	string final = "";
	for (int i = 0; i < to_string(a).length(); i++) if (to_string(a)[i] != '-') final += string(1, to_string(a)[i]);
	return stoi(final);
}

int absolute5(int a) {
	if (a == NULL || to_string(a) == "") return 0;
	vector<char> res;
	for (int i = 0; i < to_string(a).size(); i++) if (to_string(a)[i] != '-') res.push_back(to_string(a)[i]);
	string final = "";
	for (int i = 0; i < res.size(); i++)
	{
		final += res[i];
	}
	return stoi(final);
}
int absolute6(int a) {
	if (a == NULL || to_string(a) == "") return 0;
	string final = "";
	for (int i = 0; i < to_string(a).size(); i++)
	{
		if (to_string(a)[i] != '-')
		{
			final += to_string(a)[i];
		}
	}
	return stoi(final);
}

int main()
{
	cout << "Built-in abs function:" << endl;
	cout << abs(-65) << endl;
	cout << "Simplest DIY abs function:" << endl;
	auto result = absolute(-65);
	cout << result << endl;
	cout << "Overkill abs function that returns a vector of integers:" << endl;
	auto result2 = absolute2(-65);
	for (auto item : result2) cout << item;
	cout << endl;
	cout << "Smart DIY abs function:" << endl;
	auto result3 = absolute3(-65);
	cout << result3 << endl;
	cout << "Overkill char and string based abs function:" << endl;
	auto result4 = absolute4(-65);
	cout << result4 << endl;
	cout << "Same as 'Overkill abs function that returns a vector of integers' but returns an integer abs function:" << endl;
	auto result5 = absolute5(-65);
	cout << result5 << endl;
	cout << "Overkill string and char based abs function:" << endl;
	auto result6 = absolute6(-65);
	cout << result6 << endl;
}