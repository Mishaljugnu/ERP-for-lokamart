#include <iostream>
#include <string>
using namespace std;
int main() {
    string username;
    string password;
    cout << "Lokamart" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == "admin" && password == "1234") { cout << "\nLogin successful!" << endl;
    } else { cout << "\nInvalid username or password!" << endl;
    }
    return 0;
}
