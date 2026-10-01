#include <iostream>
#include <string>
#include <cmath>

struct Point
{
    int x{0};
    int y{0};
    int z{0};
};

std::ostream& operator<<(std::ostream& out, const Point& p)
{
    out << "(" << p.x << ", " << p.y << ", " << p.z << ")";
    return out;
}

class Box
{
    public:
        Box(Point p1, Point p2) : m_dot1{p1}, m_dot2{p2} {}

        Point get_dot1() const { return m_dot1; }
        Point get_dot2() const { return m_dot2; }

        int get_height() const { return std::abs(m_dot1.y - m_dot2.y); }
        int get_width() const { return std::abs(m_dot1.x - m_dot2.x); }
        int get_depth() const { return std::abs(m_dot1.z - m_dot2.z); }

        double get_diagonal() const 
        {
            return std::sqrt((get_height() * get_height()) + (get_width() * get_width()) + (get_depth() * get_depth()));
        }

    private:
        Point m_dot1{};
        Point m_dot2{};
};

void print_dots(const Box& box, const std::string& name)
{
    std::cout << name << ": " << "Dot 1 is " << box.get_dot1() << " and Dot 2 is " << box.get_dot2() << std::endl;
}

void check_if_overlap(const Box& box1, const Box& box2)
{
    
}

int main()
{
    Point uno{};
    Point dos{1, 2, 3};

    Point one{7, 8, 9};
    Point two{3, 6, 9};

    Box box1{uno, dos};
    Box box2{one, two};

    double x {box1.get_diagonal()};
    std::cout << x << std::endl;

    return 0;
}
