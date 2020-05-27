#include <stdio.h>
#include <stdlib.h>

int main(){
    int op;
    
    printf("MENU\n");
    printf("\n1 Definir pagos y deducciones\n");
    printf("\n2 Calendario de pagos\n");
    printf("\n3 Alta de nuevos empleados y clasificación\n");
    printf("\n4 Incidencias de los empleados\n");
    printf("\n5 Pagos extra y descuentos\n");
    printf("\n6 Calcular la nómina\n");
    printf("\n7 Obtener reportes y archivos necesarios\n");
    printf("\n8 Realizar el pago a los colaboradores\n");
    printf("\n9 Cierre de nómina\n");
    printf("\n10 salir\n\n");
    scanf("%d",&op);
    
	system("cls");
   
    switch(op){
    int op1,op2,op3,op4,op5,op6,op7,op8,op9,op10;
    case 1:
    printf("\nOPCION 1\n"); 
    break;
    
    case 2:
    printf("\nOPCION 2\n");
    break;
    
    case 3:
    printf("\nOPCION 3\n");
    break;
    
    case 4:
    printf("\nOPCION 4\n");
    break;
    
    case 5:
    printf("\nOPCION 5\n");
    break;
    
    case 6:
    printf("\nOPCION 6\n");
    break;
    
    case 7:
    printf("\nOPCION 7\n");
    break;
    
    case 8:
    printf("\nOPCION 8\n");
    break;
    
    case 9:
    printf("\nOPCION 9\n");
    break;
    
    case 10: 
    printf("\n HASTA LA PROXIMA \n");
	break;
    }
    
    

    return 0;
}

