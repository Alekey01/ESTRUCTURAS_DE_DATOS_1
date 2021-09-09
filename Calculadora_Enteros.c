#include <stdio.h>
#include <math.h>

int Menu();
int PideNum();
int OperaNum(int op, int x, int y);
int ImprimeNum(int resu, int op);
int main()
{

    int operacion;
    int opcion;
    int num1, num2;

    do{
        operacion = Menu();
        num1 = PideNum();
        num2 = PideNum();
        OperaNum(operacion, num1, num2);
        

        printf("Quieres hacer otra operacion: [S---1/N---0] ");
        scanf("%d", &opcion);

    }while(opcion == 1);

}

int Menu(){
    
    int ope;

    printf("1.- Suma \n");
    printf("2.- Resta \n");
    printf("3.- Multiplicación \n");
    printf("4.- Division \n");
    printf("5.- Potencia \n");
    printf("6.- Modulo \n");
    printf("7.- Raiz Cuadrada \n");

    printf("Que operacion deseas hacer:");

    scanf("%d", &ope);

    return(ope);
}

int PideNum(){
    int n;
    
    printf("Dame un numero: ");
    scanf("%d", &n);

    return(n);
}

int OperaNum(int op, int x, int y){

    int suma, resta, multi, div, pote, modu, raiz1, raiz2;

    switch (op)
    {
    case 1:

        suma = (x + y);
        ImprimeNum(suma,op);
        break;

    case 2:
        
        resta = (x - y);
        ImprimeNum(resta,op);
        break;

    case 3:

        multi = (x * y);
        ImprimeNum(multi,op);
        break;

    case 4:

        div = (x / y);
        ImprimeNum(div,op);
        break;

    case 5:

        pote = (pow(x,y));
        ImprimeNum(pote,op);
        break;

    case 6:

        modu = (x % y);
        ImprimeNum(modu,op);
        break;

    case 7:

        raiz1 = (sqrt(x));
        raiz2 = (sqrt(y));
        ImprimeNum(raiz1,op);
        ImprimeNum(raiz2,op);
        break;

    default:
        printf("Opcion invalida");
        break;
    }

}

int ImprimeNum(int resu, int op){

    if(op >= 1 || op <= 6  ){

        printf("El resultado es: %d\n", resu);
    }
    else{
        printf("La raiz es: %d\n", resu);
    }
}