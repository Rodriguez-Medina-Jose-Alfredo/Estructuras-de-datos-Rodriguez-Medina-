#include <stdio.h>
#include <math.h>
#include <locale.h>

#define RESET   "\x1b[0m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define BG_BLUE "\x1b[44m"
#define WHITE   "\x1b[37m"
#define CYAN   "\x1b[36m"
#define LYELLOW "\x1b[93m"
#define BROWN "\x1b[52m"
#define LBLUE "\x1b[94m"

void Asignacion(int mapa[5][5]){
    
    int i=0;
    int j=0;
    
      for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            
            mapa[i][j]=0;
            
        }
    }
    
    for(i=0;i<5;i++)
        mapa[0][i]=1; //Bosque en primera fila
        
    for(i=0;i<5;i++)
        mapa[i][4]=2; //Desierto en ultima columna (4)
        
        mapa[2][2]=3;
        mapa[4][0]=3;
        mapa[0][4]=4;
        mapa[4][4]=4;
        
    
}

void Asignacion2(int mapa[5][5]){
    
    mapa[1][3]=6;
    mapa[3][1]=5;
}


void BNPC(int mapa[5][5]){
    int i=0;int j=0;
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            
            if(mapa[i][j]==5)
            printf("\n\nNpc encontrado en las coordenadas: [%d][%d]\n",i,j);
            
        }  }}
        
void EventoA(int mapa[5][5]){
    
    mapa[2][0]=6;
    mapa[1][3]=0;
    
    
}

void I(int mapa[5][5], char Mundo[10][10]){
    
    int i=0;int j=0;
    
    for(i=0;i<5;i++){
        printf("\n");
        for(j=0;j<5;j++){
            
            switch(mapa[i][j]){
                
                case 0:
                printf("|%10s|",Mundo[0]);
                break;
                
                case 1:
                printf(GREEN"|%10s|"RESET,Mundo[1]);
                break;
                
                case 2:
                printf(YELLOW"|%10s|"RESET,Mundo[2]);
                break;
                
                case 3:
                printf(CYAN"|%11s|"RESET,Mundo[3]);
                break;
                
                case 4:
                printf(LYELLOW"|%10s|"RESET,Mundo[4]);
                break;
                
                case 5:
                printf(RED"|%10s|"RESET,Mundo[5]);
                break;
                
                case 6:
                printf(BLUE"|%10s|"RESET,Mundo[6]);
                break;
                
                case 7:
                printf(BROWN"|%10s|"RESET,Mundo[7]);
                break;
                
                case 8:
                printf(LBLUE"|%10s|"RESET,Mundo[8]);
                break;
                
                case 9:
                printf("|%10s|",Mundo[9]);
                break;
                
            }
             }}
    printf("\n");
}
             
void Reporte(int mapa[5][5], char Mundo[10][10]){
    int recuento[10]={0,0,0,0,0,0,0,0,0,0};
    
    int i=0;int j=0;
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            
      switch(mapa[i][j]){
                
                case 0:
                recuento[0]++;
                break;
                
                case 1:
                recuento[1]++;
                break;
                
                case 2:
                recuento[2]++;
                break;
                
                case 3:
                recuento[3]++;
                break;
                
                case 4:
                recuento[4]++;
                break;
                
                case 5:
                recuento[5]++;
                break;
                
                case 6:
                recuento[6]++;
                break;
                
                case 7:
                recuento[7]++;
                break;
                
                case 8:
                recuento[8]++;
                break;
                
                case 9:
                recuento[9]++;
                break;
                
            }
             }}
    
    for(i=0;i<10;i++){
        printf("\n");
        
            
            switch(i){
                
                case 0:
                printf("Hay %d cuadrantes de"" %s",recuento[0], Mundo[0]);
                break;
                
                case 1:
                printf("Hay %d cuadrantes de %s",recuento[1], Mundo[1]);
                break;
                
                case 2:
                printf("Hay %d cuadrantes de %s",recuento[2], Mundo[2]);
                break;
                
                case 3:
                printf("Hay %d cuadrantes de %s",recuento[3], Mundo[3]);
                break;
                
                case 4:
                printf("Hay %d cuadrantes de %s",recuento[4], Mundo[4]);
                break;
                
                case 5:
                printf("Hay %d cuadrantes de %s",recuento[5], Mundo[5]);
                break;
                
                case 6:
                printf("Hay %d cuadrantes de %s",recuento[6], Mundo[6]);
                break;
                case 7:
                printf("Hay %d cuadrantes de %s",recuento[7], Mundo[7]);
                break;
                case 8:
                printf("Hay %d cuadrantes de %s",recuento[8], Mundo[8]);
                break;
            
             }}
    
    
    
}

void Catastrofe(int mapa[5][5], char Mundo[10][10], char mens[150]){
    int e=0;
    int i=0;
    int j=0;
    
    while(e<1||e>2){

    printf("\nSeleccione el evento natural que quiere que se haga:\n1.Terremoto\n2.Tsunami\n");
    scanf("%d", &e);
    
    printf("%d",e);
    
    if(e<1||e>2){
    printf("\nInsercion invalida, intente denuevo\n");}
        
    }
    
    switch(e){
        case 1:
        
        I(mapa,Mundo);
        printf("Inserte una casilla de bioma que sera destruida");
        printf("\nIngrese su coordenada x:");
        scanf("%d", &i);
        printf("\n Inserte la coordenada Y:\n");
        scanf("%d", &j);
        
        mapa[i][j]=7;
        
        printf("\n!Ha ocurrido un Terremoto¡\n");
         I(mapa,Mundo);
        
        break;
        
        case 2:
                I(mapa,Mundo);
        printf("Inserte una casilla de bioma que sera destruida");
        printf("\nIngrese su coordenada x:");
        scanf("%d", &i);
        printf("\n Inserte la coordenada Y:\n");
        scanf("%d", &j);
        
        mapa[i][j]=8;
        
        printf("\n!Ha ocurrido un Tsunami¡\n");
         I(mapa,Mundo);
        break;
    }
    
}
    

void EventoUsr(int mapa[5][5], char Mundo[10][10]){
    char mens[150];
    int e=0;
    int i=0;
    int j=0;
    
    printf("\n Creador de eventos aleatorios. Ingrese un mensaje de evento aleatorio(solo si involucra a objetos) y lo que sucede (se mueven los objetos de lugar o se inserta un nuevo bioma).\n");
    
    
    
    printf("\nSeleccione el tipo de evento\n1.Movimiento de objetos (afecta a NPC y Cofre)\n2.Evento natural (Terremoto o Tsunami)\n");
    scanf("%d",&e);
    
    switch(e){
        
        case 1:
        
        printf("\nInserte el mensaje que dara el evento:\n");
        scanf("%s",&mens);
    
    
        printf("\n Inserte la casilla hacia la que se mueve el NPC\nIngrese su coordenada x:");
        scanf("%d", &i);
        printf("\n Inserte la coordenada Y:\n");
        scanf("%d", &j);
        
        mapa[1][3]=0;
        mapa[i][j]=5;
        
        printf("\n Inserte la casilla hacia la que se mueve el Cofre\nIngrese su coordenada x:\n");
        scanf("%d", &i);
        printf("\n Inserte la coordenada Y:\n");
        scanf("%d", &j);
        
        mapa[0][2]=0;
        mapa[i][j]=6;
        
        printf("\n!Ha ocurrido un %s¡\n", mens);
        I(mapa,Mundo);
        
        break;
        case 2:
        
        Catastrofe(mapa, Mundo, mens);
        break;
        default:
        printf("Invalido");
        break;
    }
    
}


int main()

{
    
    
    setlocale(LC_ALL, "es_ES.UTF-8"); 
    
    

    int mapa[5][5];
    char Mundo[10][10]={
        "Nada",
        "Bosque",
        "Desierto",
        "Montaña",
        "Playa",
        "NPC",
        "Cofre",
        "Ruinas",
        "Inundada"
    };
    
    printf("\n0.No hay nada."GREEN"\n1.Es bosque."RESET YELLOW"\n2.Es Desierto."RESET CYAN"\n3.Es Montaña."RESET LYELLOW"\n4.Es Playa.\n"RESET RED"5.Es un NPC\n"RESET BLUE"6.Es un cofre\n"RESET);
    
    Asignacion(mapa);
    I(mapa, Mundo);
    
    //parte 2
    Asignacion2(mapa);
    printf("\n");
    I(mapa,Mundo);
    BNPC(mapa);
    
    //parte 3
    printf("\nHa ocurrido una tormenta!\n");
    EventoA(mapa);
    I(mapa, Mundo);
    //Parte 4
    printf("\n Reporte del mundo:\n");
    Reporte(mapa,Mundo);
    
    EventoUsr(mapa,Mundo);
    
    return 0;
}
