#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string strJoin(string, int);
	int n;
	cin >> n;

	cout << strJoin(" ", n) << " | " << endl;

	int star = 1;
	int space = n - 1;
	for (int i = 0; i < n; i++)
	{
		cout << strJoin(" ", space) << strJoin("*", star) << " | " << strJoin("*", star) << strJoin(" ", space) << endl;
		star++;
		space--;
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