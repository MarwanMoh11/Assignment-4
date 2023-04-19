using namespace std;
#include <iostream>
#include <vector>
#include "LinkedLists.h"

int main() {
    vector<int> v;
    int n;
    cout << "Enter the number of integers to input: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter integer " << i + 1 << ": ";
        cin >> num;
        v.push_back(num);
    }

    LinkedList list;
    Node* head = list.createList(v);

    cout << "Original list: ";
    list.printList();

    int firstValue, secondValue;
    cout << "Enter first value to search for: ";
    cin >> firstValue;
    cout << "Enter second value to insert: ";
    cin >> secondValue;

    list.insertAfter(firstValue, secondValue);
    cout << "List after insertions: ";
    list.printList();

    int removeValue;
    cout << "Enter value to remove: ";
    cin >> removeValue;
    list.removeNode(removeValue);
    cout << "List after removal: ";
    list.printList();

    int sum = list.sumNodes();
    cout << "Sum of all nodes: " << sum << endl;

    return 0;
}
