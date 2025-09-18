#include <stdio.h>

int main(){ 
    // menu 
    int opcao,opcompara;

    printf("    <<<Menu Principal>>>     \n");
    printf("1. Ver Todas as cartas       \n");
    printf("2. Ver comparacao completa   \n");
    printf("3. Comparacao detalhada      \n");
    printf("4. Comparacao de 2 atributos \n");
    printf("5.      SAIR                 \n");
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

    int atributo1, atributo2;
    int valor1c1,valor2c1;
    int soma1,soma2;
    int Pow,pow2;
  
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
   
   case 3:
    printf ("  Escolha A Opcao\n1. Populacao \n2.Area em km\n3.Pib\n4.Numeros Turisticos\n5.Densidade Populacional\n6.Pib Percapita\n7.Poder\n");
    printf ("8.Sair Para o Menu Principal:\n");
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
    break;

    default:
    printf("Opcao Nao Esta certa \n");
    break;
    
} 
 break;   
   case 4:
    // Comparação de 2 atributos
    printf("Primeiro Atributo Da Cidade\n\n1.População\n2.Área\n3.PIB\n4.Turísticos\n5.Densidade\n6.PIBper Capita\n7.poder\nEscolha o primeiro atributo da cidade:"),scanf("%d",&atributo1);
    if (atributo1 < 1 || atributo1 > 7) {
    printf("Número inválido! Escolha entre 1 e 7.\n");
    break; 
}
    printf("Escolha o segundo Atributo: (diferente do primeiro):\n"),scanf("%d",&atributo2);
    if (atributo2 < 1 || atributo2 > 7) {
    printf("Número inválido! Escolha entre 1 e 7.\n");
    break; 
}

   if (atributo1 == atributo2){
   printf("Você não pode escolher o mesmo atributo duas vezes!\n");
   break;
          }

          // Pegar valores do atributo 1
          switch (atributo1){
              case 1: valor1c1=Populacao,printf("Primeiro atributo: População\n");                   break;
              case 2: valor1c1=Areakm,printf("Primeiro atributo: Área (km²)\n");                     break;
              case 3: valor1c1=Pib,printf("Primeiro atributo: PIB\n");                               break;
              case 4: valor1c1=NumeroTuristicos,printf("Primeiro atributo: Pontos Turísticos\n");    break;
              case 5: valor1c1=Denspo,printf("Primeiro atributo: Densidade Populacional\n");         break;
              case 6: valor1c1=pibper,printf("Primeiro atributo: PIB per Capita\n");                 break;
              case 7: valor1c1=poder,printf("Primeiro atributo: Poder\n");                           break; 
              default: printf("Numero Errado, Por favor Escolha Outro\n");                             break;
          }
          // Pegar valores do atributo 2
          switch (atributo2){
              case 1: valor2c1=Populacao2,printf("\nSegundo atributo: População\n");                    break;
              case 2: valor2c1=Areakm2,printf("\nSegundo atributo: Área (km²)\n");                      break;
              case 3: valor2c1=Pib2,printf("\nSegundo atributo: PIB\n");                                break;
              case 4: valor2c1=NumeroTuristicos2,printf("\nSegundo atributo: Pontos Turísticos\n");     break;
              case 5: valor2c1=Denspo2,printf("\nSegundo atributo: Densidade Populacional\n");          break;
              case 6: valor2c1=pibperc2,printf("\nSegundo atributo: PIB per Capita\n");                 break;
              case 7: valor2c1=poder2,printf("\nSegundo atributo: Poder\n (Lembrando Tem Que Ter Menos que ele para ganhar* )\n");  break;
              default: printf("Numero Errado, Por favor Escolha Outro\n");break;
          }
          

          
// Comparação
int pontos1 = 0, pontos2 = 0;   

if (atributo1 == 7 && atributo2 != 7) {  
    if (valor1c1 < valor2c1) 
        pontos1++;
    else 
        pontos1--;  
}
else if (atributo2 == 7 && atributo1 != 7) {
    if (valor2c1 < valor1c1) 
    pontos2--;  
    else 
    pontos2++;  
}
else {
    if (valor1c1 < valor2c1) pontos1++;
    if (valor2c1 > valor1c1) pontos1++;
    if (soma1 > soma2) pontos1++;
    else if (soma2 > soma1) pontos2++;
}

if (pontos1 > pontos2) {
    printf("\n%s venceu!\n", NomeCidade);
    printf("Valores finais:\n");
    printf("Atributo Da Carta 1:( %d ) vs Atributo Da Carta 2: ( %d )", valor1c1, valor2c1);

}
else if (pontos2 > pontos1) {
    printf("\n%s venceu!\n", NomeCidade2);
    printf("Valores finais:\n");
    printf("Atributo Da Carta 2: ( %d ) vs Atributo Da Carta 1: ( %d )", valor2c1, valor1c1);
}
else {
    printf("\nEmpate!\n");
    printf("Valores finais:\n");
    printf("Atributo Da Carta 1: ( %d ) vs Atributo Da Carta 2: ( %d  )", valor1c1, valor2c1);

}
return 0;
}
}