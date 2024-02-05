#include <iostream>
#include <cstdlib> 

using namespace std;

class Search {
    int *arr;
    int *size;
    int *target;

public:
    Search() {
        size = new int;
        target = new int;
    }

    ~Search() {
        delete[] arr;  
        delete size;   
        delete target; 
    }

    void getElement() {
        cout << "Enter the size of the array: " << endl;
        cin >> *size;

        arr = new int[*size];

        cout << "Enter the elements in ascending order: " << endl;
        for (int i = 0; i < *size; i++) {
            cin >> arr[i];
        }

        cout << "Enter the target element: " << endl;
        cin >> *target;
    }

    int binarySearch() {
        int lo = 0;
        int hi = *size - 1;
        int indx = -1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] == *target) {
                cout << "Target found.";
                indx = mid;
                return indx;
            } else if (arr[mid] > *target) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        return indx;
    }
};

int main() {
    Search c1;
    c1.getElement();
    int i = c1.binarySearch();
    return 0;
}
