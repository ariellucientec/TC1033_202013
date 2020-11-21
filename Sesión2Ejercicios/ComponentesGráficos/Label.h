#include<string>
#include<iostream>
using namespace std;

#pragma once
class Label
{
public: 
    Label();
    Label(string theText, int theSize);

private:
    int size;
    string text;

public:
    void setText(string theText);
    void setSize(int theSize);

    int getSize();
    string getText();
};