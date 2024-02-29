#include <stdio.h>

int main(){
    int x, y;
    float z;
    printf("Creedito hipotecario \n");
    printf("Cuantos años llevas trabajando:");
    scanf("%d", &x);
    printf("Cual es tu sueldo mensual:");
    scanf("%d", &y);

    z=y*.1;

    if(x>5){
        if(z>1000){
            printf("Puedes tener credito hipotecario \n");
        }
    }

    printf("Fin del programa \n");

    return 0;
}