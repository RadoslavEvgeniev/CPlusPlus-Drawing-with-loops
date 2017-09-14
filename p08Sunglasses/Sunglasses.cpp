#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	string strJoin(string, int);

	cout << strJoin("*", 2 * n) << strJoin(" ", n) << strJoin("*", 2 * n) << endl;

	int mid = (n / 2);
	for (int i = 1; i < n - 1; i++)
	{

		if (i == mid && n % 2 != 0) {
			cout << "*" << strJoin("/", 2 * n - 2) << "*" << strJoin("|", n) << "*" << strJoin("/", 2 * n - 2) << "*" << endl;
			
		}
		else if (n % 2 == 0 && i == mid - 1) {
			cout << "*" << strJoin("/", 2 * n - 2) << "*" << strJoin("|", n) << "*" << strJoin("/", 2 * n - 2) << "*" << endl;
		}
		else {
			cout << "*" << strJoin("/", 2 * n - 2) << "*" << strJoin(" ", n) << "*" << strJoin("/", 2 * n - 2) << "*" << endl;
		}
	}

	cout << strJoin("*", 2 * n) << strJoin(" ", n) << strJoin("*", 2 * n) << endl;
	
}
string strJoin(string text, int count) {
	stringstream ss;
	for (int i = 0; i < count; i++)
	{
		ss << text;
	}
	return ss.str();
}