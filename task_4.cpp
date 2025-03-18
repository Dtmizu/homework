#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> numbers = { 1, 3, 5, 7, 9 };
    int n;
    cin >> n;
    numbers.erase(n);
    for (int x : numbers) {
        cout << x << " ";
    }
}