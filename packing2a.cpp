#include <iostream>
using namespace std;

int main() {
    int capacity, item, total = 0;
    cout << "Enter capacity: ";
    cin >> capacity;
    cout << "Enter items:" << endl;

    while (cin >> item) {
        if (!item) {
            cout << "Total: " << total << endl;
            break;
        }
        if (total + item > capacity)
        {
            cout << "Total: " << total << endl;
            total = 0;
        }
        total += item;
    }
}
