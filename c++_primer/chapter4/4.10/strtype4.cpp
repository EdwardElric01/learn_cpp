#include <iostream>
#include <string>
#include <cstring>


int main(){

    using namespace std;

    char charr[20];
    string str;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in charr before input: " << str.size() << endl;
    cout << "Enter a line of text: " << endl;
    cin.get(charr, 20).get();
    cout << "You entered: " << charr << endl;

    cout << "Enter another line of text: " << endl;
    getline(cin, str);
    cout << "You entered: " << str << endl;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in charr before input: " << str.size() << endl;

    return 0;
}
