#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string strJoin(string, int);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << strJoin("$ ", i + 1) << endl;
	}
}
string strJoin(string text, int count) {
	stringstream ss;
	for (int i = 0; i < count; i++)
	{
		ss << text;
	}
	return ss.str();
}