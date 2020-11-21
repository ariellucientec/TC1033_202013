#include<string>

using namespace std;

#pragma once
class TextField
{
private:
    string text;
    int size;
    bool multiLine;

public:
    TextField();
    TextField(string theText, int size, bool isMultiLine);

    void setText(string theText);
    string getText();

    void setSize(int theSize);
    int getSize();

    void setMultiLine(bool isMultiLine);
    bool getMultiLine();
};