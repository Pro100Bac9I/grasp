#include "controller.h"
 
int main()
{
    Controller controller;
    controller.createDocument("My document");
    controller.createCircle();
    controller.createLine();
    controller.createRectangle();
    controller.delPrimitive();
    controller.saveDocument("C:\\");
    controller.closeDocument();
 
    return 0;
}