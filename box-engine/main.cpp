#include <iostream>

struct Point
{
    int x{0};
    int y{0};
}

class Box
{
    public:
        Box(Point p1, Point p2) : m_dot1{p1}, m_dot2{p2} {}

        Point get_dot1() const { return m_dot1; }
        Point get_dot2() const { return m_dot2; }


        // TODO
        // check if it overlaps with a different box


        // check the width, length and height of the box
        // check the euclidan distance of the box
    private:
        Point m_dot1{};
        Point m_dot2{};
};

void print_dots(const Box& box)
{
    std::cout << "Dot 1 is: " << box.get_dot1() << " and Dot 2 is: " << box.get_dot2() << std::endl;
}

void check_if_overlap(const Box& box1, const Box& box2)
{
    
}

int main()
{

    return 0;
}
