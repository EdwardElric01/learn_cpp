#include <iostream>

void swapr(int &a, int &b);
void swapp(int *p, int *q);
void swapv(int a, int b);

int main()
{
    using namespace std;

    int wallet1 = 300, wallet2 = 350;
    int wallet3 = 300, wallet4 = 350;
    int wallet5 = 300, wallet6 = 350;

    cout << "wallet1 = wallet3 = wallet5 = $ " << wallet1 << endl;
    cout << "wallet2 = wallet4 = wallet6 = $ " << wallet2 << endl;

    swapr(wallet1, wallet2);
    swapp(&wallet3, &wallet4);
    swapv(wallet5, wallet6);

    cout << "swapr:" << endl;
    cout << "wallet1 = $ " << wallet1
        << " wallet2 = $ " << wallet2 << endl;

    cout << "swapp:" << endl;
    cout << "wallet3 = $ " << wallet3
        << " wallet4 = $ " << wallet4 << endl;

    cout << "swapv:" << endl;
    cout << "wallet5 = $ " << wallet5
        << " wallet6 = $ " << wallet6 << endl;
}

void swapr(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swapv(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swapp(int *p, int*q)
{
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}
