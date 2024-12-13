// deletion of any element from the list
#include <iostream>
using namespace std;

int main() {
    int n, arr[100];

    cout << "Enter size of the array (max 100): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> arr[i];
    }

    // Taking position to delete
    int pos;
    cout << "Enter position to delete : ";
    cin >> pos;

    // Performing the deletion operation
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];  // Shift elements left
    }
    n--;

    // Displaying the updated array
    cout << "Updated array: " << endl;
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << endl;
    }

    return 0;
}
