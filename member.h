#include <iostream>
#include <string>
#include "node.h"
using namespace std;

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
}