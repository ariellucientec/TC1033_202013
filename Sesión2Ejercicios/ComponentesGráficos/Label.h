#include<string>
#include<iostream>
#include"Font.h"
using namespace std;

#pragma once
class Label
{
public: 
    Label();
    Label(string theText, int theSize, Font theFont);

private:
    int size;
    string text;
    Font font;

public:
    void setText(string theText);
    void setSize(int theSize);

    int getSize();
    string getText();

    void setFont(Font theFont);
    Font getFont();

};