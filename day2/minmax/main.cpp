#include <iostream>
#include "minmax.h"

using namespace std;

int main() {
    Minmax m;
    int x = 1;
    int y = 2;
    int z = 1;

    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "z=";
    cin >> z;
    
    cout << "最大のものは" << m.max(x, y, z) << endl;
    cout << "最小のものは" << m.min(x, y, z) << endl;
}