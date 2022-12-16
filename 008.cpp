#include "pch.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <math.h>
using namespace std;
int main(){
    std::ifstream g("input.txt");
    std::ofstream h("output.txt");
    int a,z,x;
    z = 1;
    g >> a;
    while (z !=0) {
        if (a == 1) break;
        if (a % 2 != 0) { z = 0;}
        else {
            cout << a << " " << endl;
                a = a / 2;
                z++;
                cout << z << " ";
        }
    }
    while (a%5==0) {
        
            a = a / 5;
            cout << a << " " << endl;
            cout << z << "a ";
            ++z;
            if (a % 5 != 0) { z = 0; break;}
            if (a == 1) break;
        
    }
    while (a % 2 == 0) {
        if (a % 2 != 0) { z = 0; break; }
        else {
            cout << a << " " << endl;
            a = a / 2;
            ++z;
            cout << z << "2 ";
            if (a % 5 != 0) { z = 0; break; }
            if (a == 1) break;
        }
    }
    if (z > 0) h << "No";
    else h << "YES";
    return 0;
}