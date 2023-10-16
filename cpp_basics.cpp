// skeleton of a program
#include <bits/stdc++.h> //bits/stdc++.h includes all libraries inside it
using namespace std;
// using std as name space
int main()
{
    // input output
    int n;
    string s;
    cout << "Enter Name\n";
    getline(cin, s);
    cout << s << endl;
    cout << "enter the age of " << s << endl;
    cin >> n;
    cout << n << endl;
    // WAP to check adult or not
    if (n >= 18)
        cout << s << " is an adult\n";
    else
        cout << "He is not an adult\n";
    return 0;
}