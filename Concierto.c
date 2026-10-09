#include <stdio.h>
#include <string.h>

    void Agregar(char E[10][30]){
        int i=0;
        char temp[30];
        
        for(i=5;i<10;i++){
            printf("\nInserte el nombre de la banda numero %d que tocara en el concierto:", i+1);
            
            if (fgets(temp, sizeof(temp), stdin) != NULL)
                 temp[strcspn(temp, "\n")] = '\0';
        
            strcpy(E[i], temp);
        }
        
    }
    void Buscar(char E[10][30]){
        char N[30];
        int i=0;int j=0;
        
        printf("\nBuscador de Bandas, escriba el nombre de una banda y le diremos en que escenario tocará:\n");
        
        if (fgets(N, sizeof(N), stdin) != NULL)
                 N[strcspn(N, "\n")] = '\0';
        
        for(i=0;i<10;i++){
            
            if(strcmp(N,E[i])==0){
                printf("\nLa banda %s tocará en el escenario numero: %d\n", E[i], i+1);
                j++;
            } 
            
        }if(j==0){
            printf("\nBanda no encontrada\n");}
        
        
    }
    
    void I(char E[10][30]){
        
        int i=0;
        
        for(i=0;i<10;i++){
            printf("-Banda: %s --- Escenario: %d\n", E[i], i+1);
        }
    }
    
    void Cambio(char E[10][30]){
        
        char temp[30];
        
        strcpy(temp, E[0]);
        strcpy(E[0], E[4]);
        strcpy(E[4], E[4]);
        
    }



int main()
{
    
    char E[10][30]= {
        "Molotov",
        "Café Tacvba",
        "Zoé",
        "Draco Rosa",
        "El Haragán y Cia"
    };
    
    
    Agregar(E);
    Buscar(E);
    I(E);
    // Cambio de lugar
    Cambio(E);

    return 0;
}