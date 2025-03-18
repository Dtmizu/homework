#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    int amount;
    int input;

    cin >> amount;
    for (int i = 0; i < amount; i++) {
        cin >> input;
        numbers.push_back(input);
    }
    vector<int> reverse;
    do {
        reverse.push_back(numbers.back());
        numbers.pop_back();
    } while (!numbers.empty());
    for (int x : reverse) {
        cout << x << " ";
    }
}