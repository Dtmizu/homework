#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> numbers = { 1, 3, 5, 7, 9 };
    int input;
    cin >> input;
    if (numbers.count(input) == true) {
        cout << "Found";
    }
    else {
        cout << "Not Found";
    }
}