#include <iostream>


int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;
    cout << "rats = " << rats << ", rats = " << rats << endl;
    rodents ++ ;
    cout << "rodents = " << rodents << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats << ". rodents address = " << &rodents << endl;
    return 0;
}
