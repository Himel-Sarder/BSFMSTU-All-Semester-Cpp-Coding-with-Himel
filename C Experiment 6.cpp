#include <iostream>

using namespace std;

class TimeConverter {
private:
    int H;
    int M;
    int S;

public:
    TimeConverter(int sec) {
        H = sec / 3600;
        M = (sec % 3600) / 60;
        S = (sec % 3600) % 60;
    }

    void print() {
        cout << "HH:MM:SS : " << H << ":" << M << ":" << S << endl;
    }
};

int main() {
    int second;
    cout << "Enter Seconds : ";
    cin >> second;

    TimeConverter obj(second);

    obj.print();

    return 0;
}
