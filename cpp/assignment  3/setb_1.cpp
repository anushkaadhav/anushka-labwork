
#include <iostream>
using namespace std;

class Point
 {
private:
    int x, y;

public:
   
    Point()
     {
        x = 0;
        y = 0;
    }

 
    Point(int x_val, int y_val)
     {
        x = x_val;
        y = y_val;
    }

    
    Point(const Point& p) 
    {
        x = p.x;
        y = p.y;
    }

    
    void display() 
     {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main()
 {
    // Using default constructor
    Point p1;
    p1.display();

    // Using parameterized constructor
    Point p2(5, 10);
    p2.display();

    // Using copy constructor to copy p2 to p3
    Point p3 = p2;
    p3.display();
    

    return 0;
}
