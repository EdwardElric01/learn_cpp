#include <iostream>

void simple(int n);

int main()
{
    using namespace std;
    cout << "main() will call the simple() function:" << endl;
    simple(2);
    cout << "main() is finished with the simple() function. " << endl;
    return 0;
}

void simple(int n)
{
    using namespace std;
    cout << "I'm simple and I recieved " << n << endl;
}
