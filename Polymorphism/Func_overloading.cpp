#include <iostream>
using namespace std;

// Both func are named same but have different parameter
void add(int a, int b)
{
	cout<<a+b<<endl;
}

void add(int a)
{
	cout<<a+10<<endl;
}

int main() {
    int a = 12;
    int b = 12;
    add(a,b);
    add(a);

    return 0;
}

