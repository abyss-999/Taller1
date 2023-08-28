#include <iostream>
#include <conio.h>
using namespace std;
struct Elmto 
{
    int num;
    struct Elmto *siguiente;
    
};

struct Elmto *pi,*pa,*pf;

void insertar_dato(int dato){
    if (pi == NULL){
        pi = new (Elmto);
        pi->num = dato;
        pf=pi;
    }else{
        pa = new(Elmto);
        pf ->siguiente = pa;
        pa ->num = dato;
        pf = pa;
    }
    pf ->siguiente = NULL;
}

void mostrar_lista(){
    pa = pi;
    cout <<endl<<endl<< "elementos de la lista "<<endl<<endl;
    while (pa != NULL){
        cout<<"elemento"<< ":"<< pa->num << endl;
        pa = pa -> siguiente;
    }
    
}

int main() {
    int dato; 
    char respuesta;

    do
    {
        cout<<endl<<"Ingrese un dato: ";cin>>dato;
        insertar_dato(dato);
        cout<<endl<<"Seguir ingresando datos? (s/n)";
        respuesta = getch();

    } while (respuesta == 's');
    mostrar_lista();
    return 0;
}
