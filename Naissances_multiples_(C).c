// Déclaration des fonctions
#include <stdio.h> // nécessaire pour printf
#include <stdlib.h> 
#include <math.h> 
#include <stdbool.h>
#include <unistd.h> // nécessaire pour fonction sleep
// FONCTIONS
void nbrprenom(){
        FILE* fichiercsv = NULL;
    fichiercsv = fopen("dpt2020_test.csv", "r");
      if (!fichiercsv)
  {
  //  fprintf(stderr, "Impossible d'ouvrir le fichier %s en lecture\n", argv[1]);
  //  return 2;
  }
    char Prenoms[100];
    int i=0;
    int nPrenoms = 0;
    int c ;
    while((c=fgetc(fichiercsv)) != EOF)
{
	if(c=='\n' )
		nPrenoms++;
        i++;
}
printf("Le nombre de prénoms est : ");
printf("%d",nPrenoms);
printf("\n");
}
void LectureFichier(){
    FILE* fichier = NULL;
    fichier = fopen("dpt2020_test.csv", "r");
      if (!fichier)
  {
  //  fprintf(stderr, "Impossible d'ouvrir le fichier %s en lecture\n", argv[1]);
  //  return 2;
  }
    char Naissances[100];
    int i=0;
    int nNaissances = 0;
    int c ;
    while((c=fgetc(fichier)) != EOF)
{
	if(c=='\n' )
		nNaissances++;
        i++;
}
printf("Le nombre de naissances est : ");
printf("%d",nNaissances);
printf("\n");
}
void DetectGenre(){
    FILE* fichier1 = NULL;
    fichier1 = fopen("dpt2020_test.csv", "r");



  
// faire le traitement de la ligne
int nb_hommes = 0;
int nb_femmes = 0;
int i=0;
char Naissances[100];
int sexe;

while((sexe=fgetc(fichier1)) != EOF)
{
    {
	if (sexe=='1')
    {
        nb_hommes++; // màj du nb d'hommes
    }
    
    else if (sexe=='2')
    {
        nb_femmes++; // màj du nb de femmes 
    }
}
}
{
// Corriger les résultats
nb_hommes=nb_hommes-36;
nb_femmes=nb_femmes-7;
printf("Le nombre d'hommmes est : ");
printf("%d", nb_hommes);
printf("\n");
printf("Le nombre de femmes est : ");
printf("%d", nb_femmes);
printf("\n");
}
}
void menu(){
    int choix;
	int option=1;
    printf("Opérations");
    while (option)
	{	system("clear");
		printf("-------------------------MENU FILE-------------------------\n");
		printf("1 --> Réafficher ce menu \n");
		printf("2 --> Le nombre de naissances\n");
		printf("3 --> Le nombre de prénoms\n");
		printf("4 --> Statistiques sur un prénom \n");
        printf("5 --> Le nombre d'hommes et de femmes \n");
		printf("6 --> Quitter\n");
		
		printf("Choix?");
		scanf("%d",&choix);
		
		switch (choix)
		{
			case 1: menu(); getchar();break;
			case 2: LectureFichier();sleep(3); getchar();break;
			case 3:nbrprenom();sleep(3);getchar();break;
			//case 4: getchar();break;
            case 5: DetectGenre();sleep(3); getchar; break;
			case 6: return ;getchar();break;
		}
		
	}
}
int main(){
    menu();
    return 0;

}