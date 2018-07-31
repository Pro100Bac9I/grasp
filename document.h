#pragma once

#include <string>
#include <memory>
#include <vector>

#include "primitive.h"

class Document
{
public:
    Document(const std::string &_name) : name(_name) {}
    ~Document(){};
    void addPrimitive(std::unique_ptr<Primitive> &&prim)
    {
        prim->display();
        primitives.push_back(std::move(prim));
    }
    void delPrimitive()
    {
        primitives.pop_back();
    }
private:
    std::string name;
    std::vector<std::unique_ptr<Primitive>> primitives;
};