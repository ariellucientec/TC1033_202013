#include"Label.h"
#include"TextField.h"

int main()
{
    Label defaultLabel;
    Label parameterizedLabel("Nombre", 30);
   
    TextField defaultTextField;
    TextField parameterizedTextField("el texto del cuadro de texto", 50, true);

    cout << parameterizedTextField.getText();

}