#include <iostream>
using namespace std;

void Swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int X, Y;
    cin >> X >> Y;

    Swap(X, Y);

    cout << X << " " << Y << endl;

    return 0;
}
