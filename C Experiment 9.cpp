#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;

class Area {
public:
    float R;
    float H;
    float B;
    int U;
    int W;

    void Input1() {
        cout << "Enter R: ";
        cin >> R;
    }

    void Input2() {
        cout << "Enter H and B: ";
        cin >> H >> B;
    }

    void Input3() {
        cout << "Enter W and H: ";
        cin >> W >> U;
    }

    void AreaOfCircle() {
        cout << "Area : " << pi * R * R << endl;
    }

    void AreaOfTriangle() {
        cout << "Area : " << 0.5 * H * B << endl;
    }

    void AreaOfRectangle() {
        cout << "Area : " << W * U << endl;
    }
};

int main() {
    int choice;
    Area obj;
    cout << "Enter your choice: \n1. Circle \n2. Triangle \n3. Rectangle \n" << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "-----Area of Circle---------" << endl;
            obj.Input1();
            obj.AreaOfCircle();
            break;
        case 2:
            cout << "-----Area of Triangle---------" << endl;
            obj.Input2();
            obj.AreaOfTriangle();
            break;
        case 3:
            cout << "-----Area of Rectangle---------" << endl;
            obj.Input3();
            obj.AreaOfRectangle();
            break;
        default:
            cout << "Wrong Choice!! Try again" << endl;
            break;
    }
    return 0;
}
