#include"Label.h"
#include"TextField.h"
#include"Font.h"

int main()
{
    Font arial12("arial", 12);

    Label defaultLabel;
    Label parameterizedLabel("Nombre", 30, arial12);
   
    TextField defaultTextField;
    TextField parameterizedTextField("el texto del cuadro de texto", 50, true);

    cout << "el texto de la etiqueta es " << parameterizedLabel.getText() << endl;
    cout << "y su tipo de letra es " << parameterizedLabel.getFont().getStyle() << endl;

}