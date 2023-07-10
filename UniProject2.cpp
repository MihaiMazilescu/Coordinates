#include <iostream>
#include <cstdio>
#include <cmath>

# define M_PI           3.14159265358979323846  /* pi */

using namespace std;

class Point {

    double x, y, z;

public:

    int nr;
    Point()
    {
        x = 0;
        y = 0;
        z = 0;
    }

    Point(double a, double b)
    {
        x = a;
        y = b;
        z = 0;
    }

    Point(double a, double b, double c)
    {
        x = a;
        y = b;
        z = c;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

    double getZ()
    {
        return z;
    }

    double getRadius()
    {
        return sqrt(x * x + y * y + z * z);
    }

    double getPhi()
    {
        return (atan2(y, x) * 180) / M_PI;

    }

    double getTheta()
    {
        double theta;
        theta = (acos(z / sqrt(x * x + y * y + z * z)) * 180) / M_PI;
        if (theta < 0) theta = 360 + theta;
        return theta;


    }

    void set_nr(int coord)
    {
        nr = coord;
    }

};

int main()
{
    Point v[1000];
    double m, n, p;
    int i = 0;
    int coord;
    coord = scanf("%lf;%lf;%lf", &m, &n, &p);
    while (coord != EOF)
    {
        if (coord == 2)
        {
            Point k(m, n);
            v[i] = k;
        }
        else if (coord == 3)
        {
            Point k(m, n, p);
            v[i] = k;
        }
        v[i].set_nr(coord);
        i++;
        coord = scanf("%lf;%lf;%lf", &m, &n, &p);
    }

    while (i >= 0)
    {
        if (v[i].nr == 3) printf("(r=%.3lf; phi=%.3lf; th=%.3lf)\n", v[i].getRadius(), v[i].getPhi(), v[i].getTheta());
        else if (v[i].nr == 2) printf("(r=%.3lf; phi=%.3lf)\n", v[i].getRadius(), v[i].getPhi());
        i--;
    }

    return 0;
}