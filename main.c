#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Nombre y apellido:
// Matias Nahuel Cotens

int main(int argc, char *argv[]){
    char caracter;
    //Al ingresar ctrl+Z (Windows), el programa finaliza.
    
    while((caracter = getchar()) != EOF){

        if(isupper(caracter)){

            //Si es mayuscula, mostrarlo en minuscula
            putchar(tolower(caracter));

        } else if(islower(caracter)){

            //Si es minuscula, mostrarlo en mayuscula
            putchar(toupper(caracter));

        } else if(!isdigit(caracter)){

            //Si no es decimal, mostrarlo sin modificar
            putchar(caracter);

        }
        //Si es digito decimal, no lo muestra
    }
    return EXIT_SUCCESS;
}