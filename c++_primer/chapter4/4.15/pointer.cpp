#include <iostream>

int main()
{
    using namespace std;

    int updates = 6;
    int* p_updates = &updates;

    cout << "Values: updates = " << updates << ", *p_updates = " << *p_updates << endl;
    cout << "Values: &updates = " << &updates << ", p_updates = " << p_updates << endl;
    return 0;
}
