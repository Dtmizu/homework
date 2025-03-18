#include <iostream>
#include <vector>
#include <set>
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
    set<int> ascending;
    vector<int> descending;

    do {
        ascending.insert(numbers.back());
        numbers.pop_back();
    } while (!numbers.empty());
    cout << "Ascending: ";
    for (int x : ascending) {
        cout << x <<" ";
    }
}