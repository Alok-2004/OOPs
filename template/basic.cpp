#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main(){
    int result1 = add(5, 3);          
    double result2 = add(3.14, 2.71); 
    
    float result3 = add(1.5f, 2.5f);

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;

    return 0;
}
