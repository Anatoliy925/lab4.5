#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>

using namespace std;

int main(){
    
    double x, y, R;
    srand((unsigned) time(NULL));
    
    for (int i = 0; i < 10; i++)
    {
        cout << "R = "; cin >> R;
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        
        if (x >= -R && x<=R && y>= -R && y <= R &&
            (pow(x+R, 2) + pow(y-R, 2) >= R*R) &&
            (pow(x-R, 2) + pow(y+R, 2) >= R*R))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << "R = "; cin >> R;
        x = rand()*(4*R)/RAND_MAX - 2*R;
        y = rand()*(4*R)/RAND_MAX - 2*R;
        
        if (x >= -R && x<=R && y>= -R && y <= R &&
            (pow(x+R, 2) + pow(y-R, 2) >= R*R) &&
            (pow(x-R, 2) + pow(y+R, 2) >= R*R))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }
    
    
    return 0;
}
