#include <iostream>
#include <cmath>

struct polar
{
    double r;
    double theta;
};

struct rect
{
    double x;
    double y;
};

void show_polar(const polar*);
void rect_to_polar(const rect*, polar* );


int main()
{
    using namespace std;
    rect t;
    polar p;
    cout << "Enter the x and y values: ";
    while (cin >> t.x >> t.y)
    {
        rect_to_polar(&t, &p);
        show_polar(&p);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done" << endl;
    return 0;
}


void show_polar(const polar* p)
{
    using namespace std;
    const double Rad_to_degree = 57.29577951;
    cout << "r = " << p -> r << " theta = " << p -> theta * Rad_to_degree << " degrees" << endl;
}


void rect_to_polar(const rect* r, polar* p)
{
    double x = r -> x;
    double y = r -> y;
    p -> r = sqrt(x * x + y * y);
    p -> theta = atan2(y, x);
}

