#include <iostream>
using namespace std;

void test(int x) {
    try {
        if (x == 1)
            throw x;
        else if (x == 0)
            throw 'x';
        else if (x == -1)
            throw 1.0;
        else if (x == -2)
            throw "String Exception";
        else if (x == -3)
            throw true;
        cout << "End of try block" << endl;
    } catch (char c){
        cout << "Caught a character: " << c << endl;
    } catch (int m){
        cout << "Caught an integer: " << m << endl;
    } catch (double d){
        cout << "Caught a double: " << d << endl;
    } catch (const char* s){
        cout << "Caught a string exception: " << s << endl;
    } catch (bool b){
        cout << "Caught a boolean exception: " << b << endl;
    }
    cout << "End of test function" << endl;
}

int main() {
    cout << "Testing multiple catches" << endl;
    cout << "x == 1" << endl;
    test(1);
    cout << "x == 0" << endl;
    test(0);
    cout << "x == -1" << endl;
    test(-1);
    cout << "x == -2" << endl;
    test(-2);
    cout << "x == -3" << endl;
    test(-3);
    return 0;
}
