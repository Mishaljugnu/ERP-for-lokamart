#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool checkLogin(string username, string password) {
    ifstream file("users.txt");
    if (!file.is_open()) {
        cout << "Error: users.txt not found!" << endl;
        return false;
    }

    string savedUser, savedPass;
    while (file >> savedUser >> savedPass) {
        if (username == savedUser && password == savedPass) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

int main() {
    string username, password;
    int attempts = 3;
    while (attempts > 0) {
        cout << "\nLOKAMART LOGIN \n";
        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if (checkLogin(username, password)) {
            cout << "\nLogin successful! Welcome to Lokamart.\n";
            return 0;
        }
        attempts--;
        cout << "\nInvalid username or password.\n";

        if (attempts > 0) {
            cout << "Attempts remaining: " << attempts << "\n";
        }
    }
    cout << "\nToo many failed attempts. Access denied.\n";
    return 0;
}
