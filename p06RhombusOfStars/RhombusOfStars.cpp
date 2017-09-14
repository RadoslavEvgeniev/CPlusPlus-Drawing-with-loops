#include <iostream>
#include <sstream>

using namespace std;

int main() {
	int n;
	string strJoin(string, int);

	cin >> n;
	int spaces = n - 1;
	int star = 1;
	for (int i = 0; i < n; i++)
	{
		cout << strJoin(" ", spaces) << strJoin("* ", star) << endl;
		star++;
		spaces--;
	}
	spaces = 1;
	star = n - 1;
	for (int i = 0; i < n - 1; i++)
	{
		cout << strJoin(" ", spaces) << strJoin("* ", star) << endl;
		spaces++;
		star--;
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