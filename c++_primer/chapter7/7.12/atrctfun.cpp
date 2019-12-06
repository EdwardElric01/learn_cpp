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

polar rect_to_polar(rect);
void show_polar(polar);


int main()
{
    using namespace std;
    rect t;
    polar p;

    cout << "Enter the x and y value: ";
    while (cin >> t.x >> t.y)
    {
        p = rect_to_polar(t);
        show_polar(p);
        cout << "Next two numbers (q to quit):" ;
    }

    cout << "Done" << endl;
    return 0;
}


void show_polar(polar p)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "r: "  << p.r 
        << ", angle = " << p.theta * Rad_to_deg
        << " degrees" << endl;
}

polar rect_to_polar(rect xypos)
{
    polar p;
    double x = xypos.x;
    double y = xypos.y;
    p.r = sqrt(x * x + y * y);
    p.theta = atan2(y, x);
    return p;
}
