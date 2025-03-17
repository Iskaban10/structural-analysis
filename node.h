#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    double x, y, z; // coordinates of the node
    string id;
    Node(string nodeId, double xc, double yc, double zc) // constructor
    {
        id = nodeId;
        x = xc;
        y = yc;
        z = zc;
    }
    void display_details() // function to display details
    {
        cout << "Node_Id: " << id;
        cout << "x coordinate: " << x;
        cout << "y coordinate: " << y;
        cout << "z coordinate: " << z;
    }
}