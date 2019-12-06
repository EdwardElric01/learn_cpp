#include <iostream>


struct inflatable {
    char name[20];
    float volume;
    double price;
};
   



int main(){
    using namespace std;

    inflatable* ps = new inflatable;
    cout << "Enter name of inflatable item: " << endl;
    cin.get(ps->name, 20);
    cout << "Enter volume in cubic feet: " << endl;
    cin >> ps->volume;
    cout << "Enter price: " << endl;
    cin >>(*ps).price;
    cout << "Name: " <<  ps -> name << endl;
    cout << "Volume: " <<  ps -> volume << endl;
    cout << "Price: " << (*ps).price << "$"  << endl;
    return 0;
}
