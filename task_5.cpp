#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> numbers_1;
    set<int> numbers_2;
    int input;
    int amount;

    cout << "How much numbers in the first set?: ";
    cin >> amount;

    cout << "Input numbers for the first set: ";
    for (int i = 0; i < amount; i++) {
        cin >> input;
        numbers_1.insert(input);
    }
    
    cout << "How much numbers in the second set?: ";
    cin >> amount;

    cout << "Input numbers for the second set: ";
    for (int i = 0; i < amount; i++) {
        cin >> input;
        numbers_2.insert(input);
    }

    set<int> numbers_union;
    set<int> numbers_intersection;

    for (int x : numbers_1) {
        numbers_union.insert(x);
    }
    for (int x : numbers_2) {
        numbers_union.insert(x);
    }

    for (int x : numbers_1) {
        if (numbers_1.count(x) == numbers_2.count(x)) {
            numbers_intersection.insert(x);
        }
    }

    cout << "Union: ";
    for (int x : numbers_union) {
        cout << x <<" ";
    }
    cout << endl  << "Intersection: ";
    for (int x : numbers_intersection) {
        cout << x << " ";
    }
}