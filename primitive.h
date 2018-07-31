#pragma once

#include <iostream>

class Primitive
{
public:
    virtual void display() = 0;
};
 
class Point: public Primitive
{
public:
    Point() = default;
    Point(float _x, float _y)
        : x(_x)
        , y(_y)
    {}
    virtual void display() override
    {
        std::cout << "Point" << std::endl;
    }
private:
    float x{0};
    float y{0};
};
 
class Line : public Primitive
{
public:
    Line() = default;
    Line(const Point &_start, const Point &_end)
        : start(_start)
        , end(_end)
    {}
    virtual void display() override
    {
        std::cout << "Line" << std::endl;
    }
private:
    Point start;
    Point end;
};
 
class Circle : public Primitive
{
public:
    Circle(const Point &_center = {0, 0}, float _radius = 1)
        : center(_center)
        , radius(_radius)
    {}
    virtual void display() override
    {
        std::cout << "Circle" << std::endl;
    }
private:
    Point center;
    float radius;
};
 
class Rectangle : public Primitive
{
public:
    Rectangle(const Point &_start = {0, 0}, float _width = 1, float _height = 1)
        : start(_start)
        , width(_width)
        , height(_height)
    {}
    virtual void display() override
    {
        std::cout << "Rectangle" << std::endl;
    }
private:
    Point start;
    float width;
    float height;
};