#include <iostream>
#include <sstream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string strJoin(string, int);

	int dashes;
	int star;
	int rows;
	if (n % 2 == 0) {
		dashes = (n / 2) - 1;
		star = 2;
		rows = n / 2;
	}
	else {
		dashes = (n - 1) / 2;
		star = 1;
		rows = (n / 2) + 1;
	}
	for (int i = 0; i < rows; i++)
	{
		cout << strJoin("-", dashes) << strJoin("*", star) << strJoin("-", dashes) << endl;
		dashes--;
		star += 2;
	}
	rows = n / 2;
	for (int i = 0; i < rows; i++)
	{
		cout << "|" << strJoin("*", n - 2) << "|" << endl;
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
