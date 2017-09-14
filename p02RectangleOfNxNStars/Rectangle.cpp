#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string stringJoin(string, int);
	int n;
	cin >> n;
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