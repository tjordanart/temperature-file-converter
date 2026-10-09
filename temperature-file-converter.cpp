// 5-2-Assignment.cpp
// Tyler Jordan

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFS;
    ofstream outFS;

    string city;
    int fahrenheit;
    double celsius;

    // Open input file
    inFS.open("FahrenheitTemperature.txt");

    if (!inFS.is_open()) {
        cout << "Could not open FahrenheitTemperature.txt." << endl;
        return 1;
    }

    // Open output file
    outFS.open("CelsiusTemperature.txt");

    if (!outFS.is_open()) {
        cout << "Could not open CelsiusTemperature.txt." << endl;
        return 1;
    }

    // Read, convert, and write each city's temperature
    while (inFS >> city >> fahrenheit) {
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        outFS << city << " " << celsius << endl;
    }
    // Close both files
    inFS.close();
    outFS.close();

    return 0;

}

