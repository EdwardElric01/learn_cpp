#include <iostream>
#include <string>

using namespace std;

struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_percent(free_throws & ft);
free_throws & accumulate (free_throws & target, const free_throws & source);

int main()
{
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws team = {"Throwgoods", 0, 0};

    set_percent(one);
    display(one);

    set_percent(two);

    accumulate(accumulate(team, one), two);
    display(team);
}

void display(const free_throws & ft)
{
    cout << "Name: " << ft.name 
        << ", Made: " << ft.made
        << ", Attempts: " << ft.attempts 
        << ", percent: " << ft.percent << endl;
}

void set_percent(free_throws & ft)
{
    if (ft.attempts!=0)
        ft.percent = ft.made / float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_percent(target);
    return target;
}
