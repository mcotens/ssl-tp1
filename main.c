#include <stdio.h>
#include <ctype.h>

// Nombre y apellido:
// Matias Nahuel Cotens

int main(int argc, char *argv[]){
    char caracter, caracterModificado;
    while(caracter = getchar()){
        if(isupper(caracter)){
            //Si es mayuscula, mostrarlo en minuscula
            caracterModificado = tolower(caracter);
            printf("%c", caracterModificado);
        } else if(islower(caracter)){
            //Si es minuscula, mostrarlo en mayuscula
            caracterModificado = toupper(caracter);
            printf("%c", caracterModificado);
        } else if(isdigit(caracter)){
            //Si es decimal, no hacer nada
        } else{
            //En cualquier otro caso, mostrarlo sin modificar
            printf("%c", caracter);
        }
    }
}