#include <iostream>
using namespace std;

class triangle {
    public:
        int i, j, n;

        triangle() {
            cout << "Enter the number of rows: ";
            cin >> n;
            printTriangle();
        }

        triangle(int rows) {
            n = rows;
            printTriangle();
        }

        void printTriangle() {
            for (i = 0; i < n; i++) { 
                for (j = 0; j <= i; j++) {
                    cout << i<<" ";
                cout << endl; 
            }
        }
};

int main() {
    triangle t1;

    int rows;
    cout << "Enter the number of rows for the second triangle: ";
    cin >> rows;
    triangle t2(rows);

    return 0;
}

