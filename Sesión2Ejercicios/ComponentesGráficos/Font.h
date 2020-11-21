#include<string>
using namespace std;

#pragma once
class Font
{
private:
    string style;
    int size;

public:
    Font();
    Font(string, int);

    void setStyle(string theStyle);
    string getStyle();

    void setSize(int theSize);
    int getSize();
};