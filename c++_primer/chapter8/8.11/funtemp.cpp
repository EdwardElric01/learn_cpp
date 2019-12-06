// functemp.cpp -- using a function template
#include <iostream>

template <typename T>
void Swap(T &a, T &b);

int main()
{
    using namespace std;
    int i = 10, j = 20;
    double x = 24.5, y = 81.7;

    cout << "i, j = " << i << ", " << j << endl;
    cout << "Using compiler-generated int swapper: " << endl;
    swap(i, j);
    cout << "Now i, j = " << i << ", " << j << endl;
    cout << "x, y = " << x << ", " << y << endl;
    swap(x, y);
    cout << "Using compiler-generated int swapper: " << endl;
    cout << "Now x, y = " << x << ", " << y << endl;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

