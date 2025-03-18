#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
	vector<int> numbers_1 = { 1, 1, 4, 7, 9, 4, 9 };
	set<int> numbers_2;
	for (int x : numbers_1) {
		numbers_2.insert(x);
	}
	for (int x : numbers_2) {
		cout << x << " ";
	}
}