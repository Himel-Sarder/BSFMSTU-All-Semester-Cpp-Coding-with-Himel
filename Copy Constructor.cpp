/*
Copy constructor:
The copy constructor in c++ is a constructor that creates an object by initialising 
it with a previously created object of the same class.
Example:
*/
#include <bits/stdc++.h>

using namespace std;

class CopyCon {
   int a, b;
public:
   CopyCon(int x, int y){
   a = x;
   b = y;
 }
   void Display(){
      cout << "\nValues : \t" << a << "\t" << b;
   }
};
int main(){
   CopyCon Object(30, 40);
   //Copy Constructor
   CopyCon Object2 = Object;
   Object.Display();
   Object2.Display();
}

/*
-------------------------
| Himel Sarder          |
| Dept. Of CSE, BSFMSTU |
|------------------------
*/
