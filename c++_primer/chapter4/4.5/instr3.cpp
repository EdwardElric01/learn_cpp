#include <iostream>

int main(){
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];


    cout << "Enter your name: ";
    cin.get(name, ArSize).get();

    cout << "Enter your favorite dessert: ";
    cin.get(dessert, ArSize).get();

    cout <<  "I have some delicious " << dessert << " for you, " << name << endl;
    return 0;

}
