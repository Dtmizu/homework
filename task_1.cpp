#include <iostream>
#include <set>
using namespace std;

int main()
{
    int input;
    int amount;
    set<int> numbers;

    cout << "How many numbers?" <<endl;
    cin >> amount;
    for (int i = 0; i < amount; i++) {
        cin >> input;
        numbers.insert(input);
    }
    for (int x : numbers) {
        cout << x << " ";
    }
}