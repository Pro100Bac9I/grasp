#pragma once 

#include "document.h"

#include <string>
#include <memory>

class Controller
{
public:
    Controller(){}
    void createDocument(const std::string &name)
    {
        doc = std::make_unique<Document>(name);
    }
    void openDocument(const std::string &name)
    {
        doc = std::make_unique<Document>(name);
    }
   
    using path = std::string;
    //save document to path
    void saveDocument(path toSave) {}
    void closeDocument() {}
 
    void createLine()
    {
        doc->addPrimitive(std::make_unique<Line>());
    }
 
    void createCircle()
    {
        doc->addPrimitive(std::make_unique<Circle>());
    }
 
    void createRectangle()
    {
        doc->addPrimitive(std::make_unique<Rectangle>());
    }
 
    void delPrimitive()
    {
        doc->delPrimitive();
    }
private:
    std::unique_ptr<Document> doc;
};