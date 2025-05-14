#include <iostream>
using namespace std;
int main()
{
    int edad, cat;
    float desc, cartera,cant;
    char compra;
    cout << "---TIENDA---" << endl;
    cout << "Que edad tiene " << endl;
    cin >> edad;

    if (edad <= 16)
    {
        cout << "no puedes comprar" << endl;
    }
    else

        if (edad > 16)
    {
        cout << "puede proceder con la compra" << endl;
    }
    else
    {
        cout << "ingrese un dato valido" << endl;
    }

    cout << "Seleccione una categoría:" << endl;
    cout << "1.estudiante" << endl;
    cout << "2.profecional" << endl;
    cout << "3.ver todos" << endl;
    cin >> cat;
    
    switch (cat)
    {
    case 1:
        cout << "estudiante (20%) de descuento" << endl;
        cout << "a.Laptop Básica: $900" << endl;
        cout << "b.Tablet Estudiantil: $600" << endl;
        cout << "c.Chromebook: $700" << endl;
        cin >> cat;
        break;
        switch (cat)
        {
        case 'a':
        cant=900;
            desc = cant- (900 * 0.20);
            cout << "a seleccionado una laptop basica: 900(descuento: $)" << desc << endl;
            if (compra < 1000)
            {
                cout << "todo a sido aprobado" << endl;
                cout << "su saldo actual es de:" << cartera - desc << endl;
            }
            else

                cout << "ingrese un dato valido";
            break;
            case 'b':
            cant=600;
               desc = cant- (600* 0.20);
            cout << "Tablet Estudiantil: $600(descuent: $)" << desc << endl;
            if (compra < 1000)
            {
                cout << "todo a sido aprobado" << endl;
                cout << "su saldo actual es de:" << cartera - desc << endl;
            }
            else

                cout << "ingrese un dato valido";
            break;
            case 'c':
            cant=700;
               desc = cant- (700* 0.20);
            cout << "Chromebook: $700" << desc << endl;
            if (compra < 1000)
            {
                cout << "todo a sido aprobado" << endl;
                cout << "su saldo actual es de:" << cartera - desc << endl;
            }
            else

                cout << "ingrese un dato valido";
            break;

        break;
        default:{
            cout<<"ingresa un dato correcto";
        }
            break;
        }

    default:
        break;
    case 2:

        break;
    }

    return 0;
}
