#include <stdio.h>

int main(){

    // menu 
    int opcao,opcompara;

    printf("    <<<Menu Principal>>>     \n");
    printf("1. ver Todas as cartas      \n");
    printf("2. Ver comparacao completa  \n");
    printf("3. comparacao detalhada     \n");
    printf("4.       Sair               \n");
    printf("Digite O Numero Para Seguir:"),(scanf("%d",&opcao)),printf("\n");

    // Primeira carta 
    int carta=1,Populacao=7.330483,NumeroTuristicos=86;
    char Estado='G',Codigarta[10]="G01",NomeCidade[20]="Goiais";
    float Areakm=340.086;
    float Pib=336.7;
    float pibper=Pib/Populacao;
    float Denspo=Populacao/Areakm;
    float pop=7.3;
    float notu=86;
    float akm=340;
    float pib=336;
    float pibperc=pib/pop;
    float den=pop/akm;
    float poder;
    poder=pop+notu+akm+pib+(den/1)+pibperc;  // Soma total dos float 
    // Fim do primeiro cod

    // Segunda carta 
    int carta2=2,Populacao2=3.833712,NumeroTuristicos2= 45;
    char Estado2='E',Codigocarta2[10]="E01",NomeCidade2[20]="Espirito Santo";
    float Areakm2=46.095;
    float Pib2=51.1;
    float pibper2=Pib2/Populacao2;
    float Denspo2= Populacao2/Areakm2;
    float pop2=3.8;
    float notu2=45;
    float akm2=46;
    float pib2=51.1;
    float pibperc2= pib2/pop2;
    float den2= pop2/akm2;
    float poder2;
    poder2=pop2+notu2+akm2+pib2+(den2/1)+pibperc2;  // Soma total dos float 
   // Fim do segundo cod 

 switch (opcao)
    { 
      case 1:
  
    printf("\nCartas \n\n");
// Info da primeira carta. 
    printf("Carta:%d\n",carta);                                   // qual o número da carta 
    printf("Estado:%c\n",Estado);                                // o nome do estado.  
    printf("Código:%s\n",Codigarta);                            // código da carta. 
    printf("Nome Da Cidade:%s\n",NomeCidade);                  // nome da cidade. 
    printf("População:%d\n",Populacao);                       // quantidade da população.  
    printf("Área:%.3f km2\n",Areakm);                        // quantidade da área. 
    printf("PIB:%.2f bilhoes de reais\n",Pib);              // PIB 
    printf("Numero de Pontos Turísticos:%d\n",NumeroTuristicos); // quantidades de pontos turísticos. 
    printf("Densidade Populacional:%.2f hab/km2\n", Denspo);    // densidade populacional
    printf("PIB per Capita:%.2f reais\n", pibper);             // pib percapta 
    printf("Poder:%.2f\n",poder);                             // Total De Poder da carta 
   // Fim do primeiro cod 
    printf("\n");
   // Info da segunda carta. 
    printf("Carta:%d\n",carta2);                             // qual o número da carta. 
    printf("Estado:%c\n",Estado2);                          // o nome do estado.  
    printf("Código:%s\n",Codigocarta2);                    // código da carta. 
    printf("Nome Da Cidade:%s\n",NomeCidade2);            // nome da cidade.  
    printf("População:%d\n",Populacao2);                 // quantidade da população.  
    printf("Área:%.2f km2\n",Areakm2);                  // quantidade da área.
    printf("PIB:%.2f bilhoes de reais\n",Pib2);        // PIB 
    printf("Numero De Ponts Turísticos:%d\n",NumeroTuristicos2);  // quantidades de pontos turísticos.
    printf("Densidade Populacional:%.2f hab/km2\n", Denspo2);    // densidade populacional
    printf("PIB per Capita:%.2f reais\n", pibper2);             // pib percapta 
    printf("Poder:%.2f\n",poder2);                             // Total De Poder da carta 
    printf("\n");
   // Fim da segunda carta 
    break;
    
    case 2:
    
    printf("\n\n\n  Comparacao das cartas\n\n");
   if (Populacao > Populacao2){
      printf("A População Da carta 1 ganhou\n");
   }else{ 
      printf("A População Da carta 2 ganhou\n");   
   } 
if (Areakm > Areakm2){
      printf("A Area Em Km Da carta 1 ganhou\n");
   }else{
      printf("A Area Em Km Da carta 2 ganhou\n");
   }
   if (pib>pib2){
      printf("O Pib Da carta 1 ganhou\n");
   }else{
      printf("O Pib Da carta 2 ganhou\n");
   }
   if (NumeroTuristicos>NumeroTuristicos2){
      printf("Os Pontos turisticos Da carta 1 ganhou\n");
   }else{
      printf("Os Pontos turisticos Da carta 2 ganhou\n");
   }
   if (Denspo>Denspo2){
      printf("A Densidade populacional Da carta 1 ganhou\n");
   }else{
      printf("A Densidade populacional Da carta 2 ganhou\n");
   }
   if (pibperc>pibperc2){
      printf("O Pib Percapita Da carta 1 ganhou\n");
   }else{
      printf("O Pib Percapita Da carta 2 ganhou\n");
   }
   if (poder<poder2){
      printf("O Poder Da carta 1 ganhou\n");
   }else{
      printf("O Poder Da carta 2 ganhou\n");
   }
   break;
   // fim cod
    case 3:
    printf ("       Escolha A Opcao   \n \n");
    printf ("1. Populacao            \n");
    printf ("2. Area em km           \n");
    printf ("3. Pib                  \n");
    printf ("4. Numeros Turisticos    \n");
    printf ("5. Densidade Populacional \n");
    printf ("6. Pib Percapita        \n");
    printf ("7. Poder                \n");
    printf ("8. Sair Para o Menu Principal:\n");
    printf("Digite O Numero Para Seguir:"),scanf("%d",&opcompara),printf("\n");
    switch (opcompara)
{
    case 1:
    printf(" O Maior Sempre Vence \n");
    if (Populacao > Populacao2){
      printf("A População Da carta 1 ganhou\n");
   }else if (Populacao < Populacao2) {
      printf("A População Da carta 2 ganhou\n");   
   }else{
      printf ("Houve Um Empate");
   }
   break;

    case 2:
    printf("O Maior Sempre Vence \n");
    if (Areakm > Areakm2){
      printf("A Area Em Km Da carta 1 ganhou\n");
   }else if  (Areakm < Areakm2){ 
      printf("A Area Em Km Da carta 2 ganhou\n");
   }else{
      printf ("Houve Um Empate");
   }
    break;
    case 3:
    printf("O Maior Sempre Vence \n");
    if (pib>pib2){
      printf("O Pib Da carta 1 ganhou\n");
   }else if (pib<pib2) {
      printf("O Pib Da carta 2 ganhou\n");
   }else{
      printf ("Houve Um Empate");
   }
    break;
    case 4:
    printf("O Maior Sempre Vence \n");
    if (NumeroTuristicos>NumeroTuristicos2){
      printf("Os Pontos turisticos Da carta 1 ganhou\n");
   }else if(NumeroTuristicos<NumeroTuristicos2) {
      printf("Os Pontos turisticos Da carta 2 ganhou\n");
   }else{
    printf ("Houve Um Empate");
   }
    break;
    case 5:
    printf("O Maior Sempre Vence \n");
    if (Denspo>Denspo2){
      printf("A Densidade populacional Da carta 1 ganhou\n");
   }else if(Denspo<Denspo2) {
      printf("A Densidade populacional Da carta 2 ganhou\n");
   }else{
     printf ("Houve Um Empate");
   }
    break;
    case 6:
    printf("O Maior Sempre Vence \n");
    if (pibperc>pibperc2){
      printf("O Pib Percapita Da carta 1 ganhou\n");
    }else if (pibperc<pibperc2){
      printf("O Pib Percapita Da carta 2 ganhou\n");
    }else{
     printf ("Houve Um Empate");
    }
    break;
    case 7:
    printf("O Menor Sempre Vence \n");
    if (poder<poder2){
      printf("O Poder Da carta 1 ganhou\n");
   }else if (poder>poder2) {
      printf("O Poder Da carta 2 ganhou\n");
   }else{
    printf ("Houve Um Empate");
   }
    break;

    case 8:
    printf("voltando ao Menu \n");
    return 0;
    break;

    default:
    printf("Opcao Nao Esta certa \n");
    return 0;
    break;
} // fim do cod 3 
    case 4:
    return 0;
    break;

    default:
    printf("Opcao Nao Esta certa");
    return 0;
    break;

    return 0;

 }
}
