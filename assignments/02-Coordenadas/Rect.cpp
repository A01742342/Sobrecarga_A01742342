#include "Rect.hpp"
#include "Polar.hpp"

#include <cmath>

Rect::Rect()
{
}

Rect::Rect(int valX,int valY) : x{valX}, y{valY} 
{
}

Rect Rect::operator+(Rect val)
{
        Rect tmp;
        tmp.x = this->x + val.x;
        tmp.y = this->y + val.y;

        return tmp;
}

Rect Rect::operator-(Rect val2)
{
        Rect tmp2;
        tmp2.x = this->x - val2.x;
        tmp2.y = this->y - val2.y;

        return tmp2;
}

Rect Rect::operator+(Polar p)
{
    Rect tmpp;
    tmpp.x = this->x + p.getR() * std::cos(p.getTheta());
    tmpp.y = this->y + p.getR() * std::sin(p.getTheta());

    return tmpp;
}

Rect Rect::operator-(Polar p)
{
    Rect tmppp;
    tmppp.x = this->x - p.getR() * std::cos(p.getTheta());
    tmppp.y = this->y - p.getR() * std::sin(p.getTheta());

    return tmppp;
}

int Rect::getX()
{
    return x;
}

int Rect::getY()
{
    return y;
}

std::ostream& operator<<(std::ostream& output, Rect r)
{
    output << "(" << r.getX() << ", " << r.getY() << ")\n";
    return output;
}