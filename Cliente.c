#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sonParametrosValidos(int, char**);
void imprimirMenu();
void elegirOpcion(int);
void ingresarNuevaMulta();
void buscarRegistrosSuspender();
void pagarMulta();
void buscarSaldoPatente();
void obtenerMontoTotal();

int main(int argc, char *argv[])
{  
    int opcionSeleccionada;

    if (!sonParametrosValidos(argc, argv)){
        printf("Los parámetros ingresados nos son válidos.\n");
        return 0;
    }

    do {
        imprimirMenu(argv[2]);
        scanf("%d", &opcionSeleccionada);
        getchar();
        
        system("clear");

        elegirOpcion(opcionSeleccionada);
    } while(opcionSeleccionada!=0);

   return 0;
}

void elegirOpcion(int opcion){
    switch (opcion)
    {
    case 1:
        ingresarNuevaMulta();
        break;

    case 2:
        buscarRegistrosSuspender();
        break;
    
    case 3:
        pagarMulta();
        break;
    
    case 4:
        buscarSaldoPatente();
        break;
    
    case 5:
        obtenerMontoTotal();
        break;
    
    case 0:
        break;
    
    default:
        printf("La opción seleccionada no es correcta.\n");
        break;
    }

}

int sonParametrosValidos(int argc, char **argv){
    if(argc==3){
        if(strcmp(argv[1],"-partido") == 0){
            return 1;
        }
    } else if (argc==2){
        if (strcmp(argv[1],"-h") == 0){
            return 1;
        }
    }
    
    return 0;
}

void imprimirMenu(char *partido){
    printf("//////// Partido: %s ////////\n", partido);
    printf("[1] - Ingresar nueva multa.\n");
    printf("[2] - Listar registros a suspender.\n");
    printf("[3] - Cancelar multa.\n");
    printf("[4] - Buscar monto a pagar de una patente.\n");
    printf("[5] - Monto total a pagar de todos los infractores.\n");
    printf("[0] - Salir\n");
    printf("Ingrese una opción: ");
}

void ingresarNuevaMulta(){
    char patente[8];
    char nombre[40];
    double monto;

    printf("Ingrese patente:\n");    
    fgets(patente, sizeof(patente), stdin);

    printf("Ingrese nombre:\n");    
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese monto:\n");
    scanf("%lf", &monto);
    getchar();

    system("clear");

    printf("Datos ingresados: %s  %s  %lf\n", patente, nombre, monto);
}

void buscarRegistrosSuspender(){

}

void pagarMulta(){
    char patente[8];

    printf("Ingrese patente:\n");    
    fgets(patente, sizeof(patente), stdin);
}

void buscarSaldoPatente(){
    char patente[8];
    
    printf("Ingrese patente:\n");    
    fgets(patente, sizeof(patente), stdin);
}

void obtenerMontoTotal(){

}