#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
// structure de client
//typedef struct fiche{
//    char nom[60], prenom[60],cinClient[10],telphone[10];
//    }client;
//    
//    
//    //structure de compte bancaire
//typedef struct compt{
//    char numCompt[20];
//    client cl;
//    char cinClient = cl.cinClient;
//    float solde;
//    
//    }cbanck;
//    // structure de operation
//    
//typedef struct compt{
//    char numOper[20];
//    cbanck numCmp;
//    char numCompte = numCmp.numCompt;
//    float solde
//    
//    }cbanck;
// declaration e fonction
void menu(void);
void navigate(int choix);
//fonction de clients
void ajoute_cl();
void lister_cl();
void lister_cl();
void rech_cl();
void sup_cl();
//fonction de compt 
void ajoute_cmp();
void lister_cmp();
void lister_cmp();
void rech_cmp();
void sup_cmp();
//foction de operation
void ajoute_op();
void lister_op();
void lister_op();
void rech_op();
void sup_op();
void gotoxy(int x,int y)
{
  COORD pos={x,y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
} 
main(){
	menu();
}

void menu(void)
{ 

	int choix;
	gotoxy(10,1);
	printf("Gestion des clients");
	gotoxy(50,1);
	printf("Gestion comptes");
	gotoxy(90,1);
	printf("Gestion des operations");
	//clients
	gotoxy(10,3);
	printf("1): Ajouter");
	gotoxy(10,4);
	printf("2): Lister");
	gotoxy(10,5);
	printf("3): Rechercher");
	gotoxy(10,6);
	printf("4): Modifier");
	gotoxy(10,7);
	printf("5): Supprimer");
	//comptes
	gotoxy(50,3);
	printf("6): Ajouter");
	gotoxy(50,4);
	printf("7): Lister");
	gotoxy(50,5);
	printf("8): Rechercher");
	gotoxy(50,6);
	printf("9): Modifier");
	gotoxy(50,7);
	printf("10): Supprimer");
	//operation
	gotoxy(90,3);
	printf("11): Ajouter");
	gotoxy(90,4);
	printf("12): Lister");
	gotoxy(90,5);
	printf("13): Rechercher");
	gotoxy(90,6);
	printf("14): Modifier");
	gotoxy(90,7);
	printf("15): Supprimer");	
	gotoxy(5,9);
	printf("entre votre Choix:");
	gotoxy(23,9);
	scanf("%d",&choix);
	navigate(choix);
}
//client 
void ajoute_cl(){
	system("cls");
	gotoxy(40,1);
	printf("fiche clients     ");
	gotoxy(35,3);
	printf("CIN clients       : ");
	gotoxy(35,4);
	printf("Nom clients       : ");
	gotoxy(35,5);
	printf("Prenom clients    : ");
	gotoxy(35,6);
	printf("Telephone clients : ");
}
void lister_cl(){
	system("cls");
	gotoxy(30,1);
	printf("Clients");
	gotoxy(25,3);
	printf("CIN Client");
	gotoxy(55,3);
	printf("Nom Client");
	gotoxy(75,3);
	printf("Prenom Client");
	gotoxy(95,3);
	printf("Telephone Client");
	gotoxy(25,4);
	char s[10];
	scanf("%s",&s);
	
}
void rech_cl(){
	system("cls");
	char cin[8];
	gotoxy(30,1);
	printf("Recherche client");
	gotoxy(25,3);
	printf("Entre CIN client: ");
	gotoxy(43,3);
	scanf("%s",&cin);
}
void mod_cl(){
	system("cls");
	char cin[8];
	gotoxy(30,1);
	printf("Modefier client");
	gotoxy(25,3);
	printf("Entre CIN client: ");
	gotoxy(43,3);
	scanf("%s",&cin);
}
void sup_cl(){
	system("cls");
	char cin[8];
	gotoxy(30,1);
	printf("Supprimer client");
	gotoxy(25,3);
	printf("Entre CIN client: ");
	gotoxy(43,3);
	scanf("%s",&cin);
}
//compt
void ajoute_cmp(){
}
void lister_cmp(){
}
void lister_cmp(){
}
void rech_cmp(){
}
void sup_cmp(){
}
//operation
void navigate(int choix){
	    switch(choix)
  	 {
  	 	//client
        case 1:ajoute_cl();
        break;
        case 2:lister_cl();
        break;
        case 3:rech_cl();
        break;
        case 4:mod_cl();
        break;
        case 5:sup_cl();
        break;
//        case 6:ajoute_cmp();
//        break;
//        case 7:lister_cmp();
//        break;
//        case 8:rech_cmp();
//        break;
//        case 9:mod_cmp();
//        break;
//        case 10:sup_cmp()();
//        break;
//        case 11:ajoute_op();
//        break;
//        case 12:lister_op();
//        break;
//        case 13:rech_op();
//        break;
//        case 14:mod_op();
//        break;
//        case 15:sup_op()();
//        break;
//        case 7:close();
//        break;

    }
}
