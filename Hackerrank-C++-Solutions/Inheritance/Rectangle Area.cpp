#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle {
    public:
        int l, b;

        void read_input() {
            cin >> l >> b;
        }

        void display() {
            cout << l << " " << b << "\n";
        }
};

class RectangleArea: public Rectangle {
    public:
    void display() {
        cout << l * b << "\n";
    }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
