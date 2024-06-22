#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> b(4);
    float a[4][4];
    vector<float> c(4);

    cout << "Please input values for vec B: " << "\n";
    for (int i = 0; i < 4; i++) {
        cin >> b[i];
    }
    cout << "Please input values for matrix: " << "\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        float temp;
        for (int j = 0; j < 4; j++) {
            temp += a[i][j] * b[j];
        }
        c[i] += temp;
        temp = 0;
    }

    cout << "Result: " << "\n";

    for (int i = 0; i < 4; i++) {
        cout << c[i] << " ";
    }

}