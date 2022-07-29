#include <bits/stdc++.h>

using namespace std;

// class to give line value for a point and a line
class Line
{
private:
    double x1;
    double y1;
    double x2;
    double y2;
    double slope;

public:
    Line(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2)
    {
        if (x1 - x2)
            slope = (y2 - y1) / (x2 - x1);
    }

    bool operator()(double x, double y)
    {
        // if slope exists, use difference in mx - y for two points
        if (x1 - x2)
            return (slope * x - y - slope * x1 + y1) >= 0;
        else
            return (x - x1) >= 0;
    }
};

// solution uses the fact that the centroid of a triangle always lies inside the triangle
// and if origin lies inside the triangle too, both centroid and (0, 0) should lie on the same side of each line
int solve()
{
    ifstream file("p102_triangles.txt");
    int n(0);
    char c;
    double x, y, x1, y1, x2, y2, x3, y3;

    while (!file.eof())
    {
        // read the number and skip the ','
        file >> x1;
        file.get(c);
        file >> y1;
        file.get(c);
        file >> x2;
        file.get(c);
        file >> y2;
        file.get(c);
        file >> x3;
        file.get(c);
        file >> y3;
        file.get(c);

        // get the centroid
        x = (x1 + x2 + x3) / 3;
        y = (y1 + y2 + y3) / 3;

        // construct three line objects
        Line line1(x1, y1, x2, y2), line2(x2, y2, x3, y3), line3(x3, y3, x1, y1);

        // check if centroid and origin lie in the same side of the lines for all lines
        if (line1(x, y) == line1(0, 0) && line2(x, y) == line2(0, 0) && line3(x, y) == line3(0, 0))
            n++;
    }

    return n;
}

int main()
{
    cout << solve(); // answer: 228
}