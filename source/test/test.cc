#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    int input[10];
    ifstream file;
    file.open("file.txt");
    //Generate powers of 2 and write them to the file
    for (int i = 0; i < 10; i++)
        file >> input[i];
    file.close();
    for (int i = 0; i < 10; i++)
        cout << input[i] << "\n";
}
