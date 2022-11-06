#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H//head

class ArrayList
{
public:
    ArrayList(int* array, int size) : elements(array) {this->size = size;}
    int Size()const {

private:
    int* elements;
    int size;

};