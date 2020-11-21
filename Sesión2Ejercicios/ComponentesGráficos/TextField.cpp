#include"TextField.h"

TextField::TextField()
{
    setSize(10);
}
TextField::TextField(string theText, int theSize, bool isMultiLine)
{
    setText(theText);
    setSize(theSize);
    setMultiLine(isMultiLine);
}


void TextField::setText(string theText)
{
    text = theText;
}
    
string TextField::getText()
{
    return text;
}

void TextField::setSize(int theSize)
{
    size = theSize;
}
int TextField::getSize()
{
    return size;
}

void TextField::setMultiLine(bool isMultiLine)
{
    multiLine = isMultiLine;
}
bool TextField::getMultiLine()
{
    return multiLine;
}