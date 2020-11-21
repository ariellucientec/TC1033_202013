#include"Label.h"

Label::Label()   // Constructor por default
{
    cout << "soy el constructor por default de Label" << endl;
    setSize(10);
    setText("");
}
    
Label::Label(string theText, int theSize)
{
    cout << "soy el constructor con parámetros de Label" << endl;
    setText(theText);
    setSize(theSize);
}

void Label::setText(string theText)
{
    text = theText;
}

void Label::setSize(int theSize)
{
    size = theSize;
}

int Label::getSize()
{
    return size;
}
string Label::getText()
{
    return text;
}
