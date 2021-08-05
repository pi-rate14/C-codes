#include <iostream>
using namespace std;
class cylinder
{
    float r;
    float h;

public:
    //read radius and height
    void get();
    //pi*r*r
    float base_area();
    //pi*r*r*h
    float volume();
};
class sweet : public cylinder
{
    // 1- with sugar syrup
    // 0 - without sugrar syrup
    int type;

public:
    //get all details of sweet
    void get();
    //return type of sweet
    int get_type();
};
class cuboid
{
    float l, b;
    float h;

public:
    void get();
    //l*b
    float base_area();
    //l*b*h
    float volume();
};

float pi = 3.14;
void cylinder::get()
{
    cin >> r;
    cin >> h;
}

float cylinder::base_area()
{
    return pi * r * r;
}

float cylinder::volume()
{
    return base_area() * h;
}

void sweet::get()
{
    cylinder::get();
    cin >> type;
}

void cuboid::get()
{
    cin >> l;
    cin >> b;
    cin >> h;
}

float cuboid::base_area()
{
    return l * b;
}

float cuboid::volume()
{
    return base_area() * h;
}

int sweet::get_type()
{
    return type;
}

class sweet_box : public cuboid
{
    bool material_use;
    int num_sweets;
    sweet s;
    cuboid box;

public:
    void get()
    {
        box.get();
        s.get();
        cin >> material_use;
    }
    bool compatible()
    {
        if (s.get_type() == 1 && material_use != 1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    int compute_num_of_sweets()
    {
        if (compatible())
        {
            num_sweets = box.volume() / s.volume();
            return num_sweets;
        }
        else
        {
            return 0;
        }
    }
    void print_num_of_sweets()
    {
        cout << compute_num_of_sweets();
    }
};
int main()
{

    sweet_box s;
    s.get();
    if (s.compute_num_of_sweets())
    {
        s.print_num_of_sweets();
    }
    else
        cout << "Not compatible";
}