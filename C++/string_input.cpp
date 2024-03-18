#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname;
    cout << "Full name is: \n";
    getline(cin, fullname);
    cout << "Output is: " << fullname;

    return 0;
}