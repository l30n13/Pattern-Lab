#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int x, y, x1, x2, y1, y2;

    cout<<"x1 : ";
    cin>>x1;
    cout<<"y1 : ";
    cin>>y1;
    cout<<"x2 : ";
    cin>>x2;
    cout<<"y2 : ";
    cin>>y2;

    x = abs(x2 - x1);
    x = x * x;
    y = abs(y2 - y1);
    y = y * y;

    cout<<"Distance is " << sqrt(x + y);

    return 0;
}
