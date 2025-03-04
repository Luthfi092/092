#include <iostream>
using namespace std;

float panjang, Lebar;
void InputData() {
    cout << "masukan panjang : ";
    cin >> panjang;
    cout << "masukan lebar : ";
    cin >> Lebar;
    }

    float HitungLuas() {
        return panjang * Lebar;
    }

    void OutputData() {
        cout << "Luas persegi panjang: " << HitungLuas() << endl;
    }

    int main() {
        InputData();
        OutputData();
    }