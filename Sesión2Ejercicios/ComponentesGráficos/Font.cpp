#include"Font.h"

Font::Font()
{
    setStyle("calibri");
    setSize(11);
}

Font::Font(string theStyle, int theSize)
{
    setStyle(theStyle);
    setSize(theSize);
}

void Font::setStyle(string theStyle)
{
    style = theStyle;
}
string Font::getStyle()
{
    return style;
}

void Font::setSize(int theSize)
{
    size = theSize;
}
int Font::getSize()
{
    return size;
}