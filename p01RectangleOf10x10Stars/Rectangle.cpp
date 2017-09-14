#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	int n = 10;
	string stringJoin(string, int);
	for (int i = 0; i < n; i++)
	{
		cout << stringJoin("*", n) << endl;
	}
}
string stringJoin(string text, int count) {
	stringstream ss;
	for (int i = 0; i < count; i++)
	{
		ss << text;
	}
	return ss.str();
}