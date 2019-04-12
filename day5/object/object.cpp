#include "object.h"
int Object::object_num = 0;

Object::Object()
{
    object_num++;
}

Object::~Object()
{
    object_num--;
}

int Object::getObjectNum()
{
    return object_num;
}