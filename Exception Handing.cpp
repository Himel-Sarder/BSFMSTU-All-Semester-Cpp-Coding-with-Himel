/*
Exception Handing
-------------------
Exception handling is a programming mechanism in which a program can 
detect and respond to unexpected or erroneous events, called exceptions, 
during its execution. It is a process to handle runtime errors.
*/

//Example
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
        int x, y;
        cout << "Enter first number : ";
        cin >> x;
        cout << "Enter second number : ";
        cin >> y;
        try{
            if(y == 0){
                throw 1;
            }
            double result = (double)x / y;
            cout << "Result: " << result << endl;
        }
        catch(...){ //catch(int x)
            cout << "Can't divided by Zero\nTry again!!" << endl;
        }
    }
}
/*
-------------------------
| Himel Sarder          |
| Dept. Of CSE, BSFMSTU |
|------------------------
*/ 
