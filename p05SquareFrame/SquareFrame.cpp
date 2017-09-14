#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string strJoin(string, int);
	int n;
	cin >> n;
	cout << "+ " << strJoin("- ", n - 2) << "+" << endl;
	for (int i = 0; i < n - 2; i++)
	{
		cout << "| " << strJoin("- ", n - 2) << "|" << endl;
	}
	cout << "+ " << strJoin("- ", n - 2) << "+" << endl;
}
string strJoin(string text, int count) {
	stringstream ss;
	for (int i = 0; i < count; i++)
	{
		ss << text;
	}
	return ss.str();
}