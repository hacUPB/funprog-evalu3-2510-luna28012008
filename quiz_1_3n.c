
#include <stdio.h>

int main (){
    int productos = 0; //me falto esto 
    int stock = 50; // coloque stock despues del printf y sin el int
    
    
    while(stock>= productos){
        printf("ingrese los productos que va a comprar:"); //el scanf y printf lo coloque fuera del while
        scanf("%d", &productos);
        if(productos == 0){     //coloque if else, osea al reves y habia puesto esta condicion de segunda (else if) por eso no me terminaba.
        printf("compra finalizada, vuelve pronto");
        break;  //no habia colocado el break aca y esto estaba invertido, else if debajo de un else
        } else if(productos < stock){ //puse 50 en vez de stock
            stock = stock - productos; //coloque 50 en vez de la variable
            printf("compra hecha, stock final %d", stock);
        } else {
            printf("no hay suficiente prodcutos, stock final %d/n", stock);
       
    }
    
}
return 0;  //le coloque un igual de mas 
}

//coloque else if, antes que un else, y me falto en la condicion de (producto == 0) un igual osea puse uno solo.
![comprobacion](../photos/quiz_1_prueba.png)

