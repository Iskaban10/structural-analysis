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
};
class Member
{
public:
    string id;
    Node *start, *end;
    Member(int memberId, Node *n1, Node *n2)
    {
        id = memberId;
        start = n1;
        end = n2;
    }
    void display_details()
    {
        cout << "Member_Id: " << id;
        cout << "Spans from " << start->id;
        cout << "Spans to " << end->id;
    }
};