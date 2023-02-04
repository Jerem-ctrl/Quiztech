//#include <stdbool.h> // On ajoute une bibliothèque pour pouvoir utiliser ses fonctions cette bibliothéque introduit les chiffres "booléens".
#include <stdio.h> // La bibliothèque standard du C déclarant les macros, les constantes et les définitions de fonctions utilisées dans les opérations d'entrée/sortie.
#include <stdlib.h> // Cette bibliothèque contient les déclarations de fonctions traitant d'allocation-mémoire.
#include <time.h> // Cette bibliothèque permet la représentation d'informations temporelles sous différents formats.
#include <string.h> // Est une bibliothèque qui contient les définitions des macros, des constantes et les déclarations de fonctions.  

static char *str = ">> Press 1 pour se lancer dans l'aventure\n>> Press 0 pour quitter l'aventure\n\n"; // char *str : Il s'agit d'un pointeur d'une chaîne de caractère qui est statique

int main(){
  
  int i;
  int a;
 
  int ans59;
  int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15,ans16,ans17,ans18,ans19,ans20,ans21,ans22,ans23,ans24,ans25,ans26,ans27,ans28,ans29,ans30,ans31,ans32,ans33,ans34,ans35,ans36,ans37,ans38,ans39,ans40; // Variable
  int score=0;
  int scoren=0;
  int editedValue;
  char mot1[100], mot2[100], mot3[100], mot4[100], mot5[100],mot6[100], // Variable
  mot7[100],mot8[100],mot9[100],mot10[100],mot11[100],mot12[100],mot13[100],mot14[100],mot15[100],
  mot16[100],mot17[100];
  char joueur[100];

  // Partie Nina
 printf("\n Salut Bienvenue sur QuizzTech ✌\n\n");

    int l = strlen(str);  // La fonction strlen() calcule la longueur d'une chaîne donnée (ici (str)), it does not count the null character '\0' 
    int r = 0, g = 0, b = 255;  // Création de la variable r, g et b et l'affectation de la variable b à 255  
  
    for (int i = 0; i <l; i++){ // Faire une boucle de répétition
    char c = str[i]; // Déclaration caractère 
    printf("\x1b[38;2;%d;%d;%dm%c", r, g, b, c); 
      
      r += 0;   
      g += 40;   // Paramètre par défaut 
      b += 0;   
    }
  
  printf("\x1b[0;00m");  // Mettre le texte à la couleur rouge
  scanf("%d", &i); // Lire la valeur de la réponse saisie et l'affecter à la variable i

    if(i==0){  // Si ans1 est égale à 0 alors    
    printf("\nGame over LOSER\n\n"); 
    return 0;
    }
  
    if(i!=1 && !0){  // Si la réponnse saisie est différent de 0 ou 1 alors            != (opérateur logique Non Egal), && (opératuer logqie ET)
    printf("\nInvalide :(\n");
    printf("\nVeuillez recommencer le programme en choisissant : 1 ou 0 \n\n"); 
    return 0;
    }

      if(i==1){  // Si ans1 est égale à 1 alors 
      printf("\033[0;32m");  //Mettre le texte à la couleur rouge
      printf("     _ _        _      _ _______ _______ ___________   ______      ______  ___          ____ ___    ___ ___ _______  __________          \n");
      printf("    /   |      | |   / / |  _  | |_   _| |    _    |  | ____|      |  ___| | |         /   | | |   / /  |_| |  ___| |    _    |       \n");  
      printf("   / /| |      | |  / /  | | | |   | |   |   |_|  |   | |__        | |     | |        / /| | | |  / /    _  |  |__  |   |_|  |      \n");  
      printf("  / / | |      | | / /   | | | |   | |   | ___ __|    | __|        | |     | |       / / | | | | / /    | | |  __|  | ___ __|            \n");  
      printf(" / /  | |      | |/ /    | |_| |   | |   | | | |      | |___       | |___  | |___   / /  | | | |/ /     | | | |___  | | | |    \n"); 
      printf("/_/   |_|      |___/     |_____|   |_|   |_| |_|      |_____|      |_____| |_____| /_/   |_| |___/      |_| |_____| |_| |_|     \n\n\n\n");
      printf("\033[0m");  //Mettre le texte à la couleur rouge

    printf("Veuillez entrer votre prénom : ");  // Demander le nom du joueur
    scanf("%s", joueur); // Lire la chaîne de caractère saisi et l'affecter à la variable joueur 
    printf("\nVotre nom de joueur est : %s\n\n ", joueur);  
  
    printf("\n1. Que signife GAFAM ?\n\n");
    printf("----");printf("\033[0;34m");printf(",o888888o.");printf("\033[0m");printf("-----------------------");printf("\033[0;31m");printf(".8.");printf("\033[0m");printf("--------------------");printf("\033[0;33m");printf("8 888888888888");printf("\033[0m");printf("------------------- ");printf("\033[0;32m");printf(".8.");printf("\033[0m");printf("-----------------------------");printf("\033[0;34m");printf(",8.");printf("\033[0m");printf("-------");printf("\033[0;34m");printf(",8.\n");printf("\033[0m");
    printf("---");printf("\033[0;34m");printf("8888");printf("\033[0m");printf("------");printf("\033[0;34m");printf("`88.");printf("\033[0m");printf("-------------------");printf("\033[0;31m");printf(".888.");printf("\033[0m");printf("-------------------");printf("\033[0;33m");printf("8 8888");printf("\033[0m");printf("---------------------------");printf("\033[0;32m");printf(".888.");printf("\033[0m");printf("---------------------------");printf("\033[0;34m");printf(",888.");printf("\033[0m");printf("-----");printf("\033[0;34m");printf(",888.\n");
    printf(",8 8888");printf("\033[0m");printf("-------");printf("\033[0;34m");printf("`8.");printf("\033[0m");printf("------------------");printf("\033[0;31m");printf(":88888.");printf("\033[0m");printf("------------------");printf("\033[0;33m");printf("8 8888");printf("\033[0m");printf("--------------------------");printf("\033[0;32m");printf(":88888.");printf("\033[0m");printf("-------------------------");printf("\033[0;34m");printf(".`8888.");printf("\033[0m");printf("---");printf("\033[0;34m");printf(".`8888.\n");
    printf("88 8888");printf("\033[0m");printf("---------------------------");printf("\033[0;31m");printf(". `88888.");printf("\033[0m");printf("-----------------");printf("\033[0;33m");printf("8 8888");printf("\033[0m");printf("-------------------------");printf("\033[0;32m");printf(". `88888.");printf("\033[0m");printf("-----------------------");printf("\033[0;34m");printf(",8.`8888.");printf("\033[0m");printf("-");printf("\033[0;34m");printf(",8.`8888.\n");
    printf("88 8888");printf("\033[0m");printf("--------------------------");printf("\033[0;31m");printf(".8. `88888.");printf("\033[0m");printf("----------------");printf("\033[0;33m");printf("8 888888888888");printf("\033[0m");printf("----------------");printf("\033[0;32m");printf(".8. `88888.");printf("\033[0m");printf("---------------------");printf("\033[0;34m");printf(",8'8.`8888,8^8.`8888.\n");
    printf("88 8888");printf("\033[0m");printf("-------------------------");printf("\033[0;31m");printf(".8`8. `88888.");printf("\033[0m");printf("---------------");printf("\033[0;33m");printf("8 8888");printf("\033[0m");printf("-----------------------");printf("\033[0;32m");printf(".8`8. `88888.");printf("\033[0m");printf("-------------------");printf("\033[0;34m");printf(",8' `8.`8888' `8.`8888.\n");
    printf("88 8888");printf("\033[0m");printf("---");printf("\033[0;34m");printf("8888888");printf("\033[0m");printf("--------------");printf("\033[0;31m");printf(".8' `8. `88888.");printf("\033[0m");printf("--------------");printf("\033[0;33m");printf("8 8888");printf("\033[0m");printf("----------------------");printf("\033[0;32m");printf(".8' `8. `88888.");printf("\033[0m");printf("-----------------");printf("\033[0;34m");printf(",8'   `8.`88'   `8.`8888.\n");
    printf("`8 8888");printf("\033[0m");printf("-------");printf("\033[0;34m");printf(".8'");printf("\033[0m");printf("-------------");printf("\033[0;31m");printf(".8'   `8. `88888.");printf("\033[0m");printf("-------------");printf("\033[0;33m");printf("8 8888");printf("\033[0m");printf("---------------------");printf("\033[0;32m");printf(".8'   `8. `88888.");printf("\033[0m");printf("---------------");printf("\033[0;34m");printf(",8'     `8.`'     `8.`8888.\n");printf("\033[0m");
    printf("---");printf("\033[0;34m");printf("8888");printf("\033[0m");printf("-----");printf("\033[0;34m");printf(",88'");printf("\033[0m");printf("-------------");printf("\033[0;31m");printf(".888888888. `88888.");printf("\033[0m");printf("------------");printf("\033[0;33m");printf("8 8888");printf("\033[0m");printf("--------------------");printf("\033[0;32m");printf(".888888888. `88888.");printf("\033[0m");printf("-------------");printf("\033[0;34m");printf(",8'       `8        `8.`8888.\n");printf("\033[0m");
    printf("----");printf("\033[0;34m");printf("`8888888P'");printf("\033[0m");printf("--------------");printf("\033[0;31m");printf(".8'       `8. `88888.");printf("\033[0m");printf("-----------");printf("\033[0;33m");printf("8 8888");printf("\033[0m");printf("-------------------");printf("\033[0;32m");printf(".8'       `8. `88888.");printf("\033[0m");printf("-----------");printf("\033[0;34m");printf(",8'         `         `8.`8888.\n\n\n\n");printf("\033[0m");
    
    printf("1) Google, Amazon, Facebook, Apple, Microsoft\n");
    printf("2) Gygabite, Apple, Facebook, Asus, Metaverse\n");
    printf("3) Google, AutoHero, FunMooc, Apple, Marmiton\n");
    printf("4) Je ne sais pas\n\n");
    printf("Entrer votre réponse : ");
    scanf("%d", &ans1); // Lire la réponse saisie et l'affecter à la variable ans1
   
       if(ans1==1){    // si c'est la bonne réponse, alors le score est de 3 points
       printf("\033[0;33m");   // Permet l'affichage des caractères en couleur
       printf("\nPas mal !\n\n\n");
       printf(" d8b                                     \n");         // L85 à L91 affichage des caractères
       printf(" ?88                                      \n");    
       printf("  88b                                       \n");  
       printf("  888888b     88bd88b   d888b8b    ?88   d8P   d8888b \n");
       printf("  88P `?8b    88P'    `d8P' ?88    d88  d8P'  d8P' ?88\n");
       printf(" d88,  d88   d88       88b  ,88b   ?8b ,88'   88b  d88\n");
       printf("d88'`?88P'  d88'       `?88P'`88b`  ?888P'    `?8888P'\n\n\n\n");
       printf("\033[0m");  // Permet l'affichage des caractères en couleur
       printf("Votre score est de 3 points\n\n");  // Afficher le score
       score = score+3;
       }

      else if(ans1!=1){   // si c'est la mauvaise réponse, alors le score est de 0 point
      printf("\033[0;31m");  // Permet l'affichage des caractères en couleur
      printf("Mauvaise réponse ! Veuillez réessayer                ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");    // L100 à L103 affichage des caractères
      printf("                                                     ████▌▄▌▄▐▐▌█████\n");
      printf("                                                     ████▌▄▌▄▐▐▌▀████\n");
      printf("                                                     ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
      printf("\033[0m");  // Permet l'affichage des caractères en couleur
      score = score+0;
      printf("\nVotre score est de 0 point !\n");  // Afficher le score
      printf("Entrer votre réponse : "); // Seconde chance au cas où si la première réponse est mauvaise
      scanf("%d", &ans1);  

        // Structures imbriquées

           if(ans1==1){  // Si ans1 est égale à 1 alors 
           printf("Bravo vous avez réussi !\n");   // :)   
           printf("Votre score est de 3 points\n\n\n");   // Afficher le score
             score = score+3;
           }
        
           if(ans1!=1){  // Si ans1 n'est pas égale à 1 alors
           printf("\nVous n'avez pas réussi :(\n");   // :(
           printf("\nVotre score est de %d points !\n", scoren);   // Afficher le score
           } 
             
           else{  // Si la réponse saisie n'est pas égale à 1 ou différent (< ou >) de 1 alors afficher
           printf("Invalide\n\n"); 
           } // L88
      } // L71
    } //51  
  
      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : " ); // Question permettant de savoir si le joueur souhaite arrêter ou continuer le quizz
  
      fflush( stdout );
      scanf( "%d", & editedValue );
  
        if(editedValue==0){ // Si la valeur saisie est 0 alors afficher 
        printf("Tu arrête le Quizz");  
        return 0;
        }

  
  // Fin première question 
      
       
    printf("\n2. La spécialité 🆂🆃🅸2🅳 date de 2017 ?\n\n");
    printf("                         ______       \n" );
    printf(" _________        .------      ------.\n" );
    printf(":______.-':      :  ");printf("\033[0;34m");printf(".--------------.");printf("\033[0m");printf("  :             \n" );
    printf("| ______  |      | ");printf("\033[0;34m");printf(":                :");printf("\033[0m");printf(" |             \n" );
    printf("|:______B:|      | ");printf("\033[0;34m");printf("|  Little Error: |");printf("\033[0m");printf(" |             \n" );
    printf("|:______B:|      | ");printf("\033[0;34m");printf("|                |");printf("\033[0m");printf(" |             \n" );
    printf("|:______B:|      | ");printf("\033[0;34m");printf("|  Power not     |");printf("\033[0m");printf(" |             \n" );
    printf("|         |      | ");printf("\033[0;34m");printf("|  found.        |");printf("\033[0m");printf(" |             \n" );
    printf("|:_____:  |      | ");printf("\033[0;34m");printf("|                |");printf("\033[0m");printf(" |             \n" );
    printf("|    ==   |      | ");printf("\033[0;34m");printf(":                :");printf("\033[0m");printf(" |             \n" );
    printf("|       O |      :  ");printf("\033[0;34m");printf("'--------------'");printf("\033[0m");printf("  :             \n" );
    printf("|       ");printf("\033[0;32m");printf("o");printf("\033[0m");printf(" |      :'---...______...---'              \n" );
    printf("|       o |-._.-i___|'             |._              \n" );
    printf("|'-.____o_|   '-.   '-...______...-'  `-._          \n" );
    printf(":_________:     `.____________________   `-.___.");printf("\033[0;31m");printf("-");printf("\033[0m");printf(". \n" );
    printf("                .'.eeeeeeeeeeeeeeeeee.'.      :___:\n" );
    printf("              .'.eeeeeeeeeeeeeeeeeeeeee.'.         \n" );
    printf("             :____________________________:\n\n\n" );
    printf("Vrai ✔️\n");
    printf("Faux ❌\n\n");
    printf("Entrer votre reponse : \n\n");
    scanf("%s", mot1);

       if(strcmp (mot1,"Faux") == 0){    //strcmp(mot1,"Faux") == 1
       printf("Exactement, la spécialité date de 2013\n");     
       score = score+3;
      printf("\nPas mal !\n\n\n");
       printf("\033[0;33m");
       printf(" d8b                                     \n");     
       printf(" ?88                                      \n");    
       printf("  88b                                       \n");  
       printf("  888888b     88bd88b   d888b8b    ?88   d8P   d8888b \n");
       printf("  88P `?8b    88P'    `d8P' ?88    d88  d8P'  d8P' ?88\n");
       printf(" d88,  d88   d88       88b  ,88b   ?8b ,88'   88b  d88\n");
       printf("d88'`?88P'  d88'       `?88P'`88b`  ?888P'    `?8888P'\n\n\n\n");
       printf("\033[0m");
       printf("Votre score est de 3 points\n\n\n\n");
       }
         
       else{
      printf("\033[0;31m");
      printf("Mauvaise réponse !             ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
      printf("                               ████▌▄▌▄▐▐▌█████\n");
      printf("                               ████▌▄▌▄▐▐▌▀████\n");
      printf("                               ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
      printf("\033[0m");
      printf("\n\nla spécialité date de 2013\n");        
       printf("Votre score est de %d points\n",scoren);
       }
  
      
  printf( "\nBravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n" );
  fflush( stdout );
  scanf( "%d", & editedValue );
  if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
 
    printf("\n3. Le taux de réussite en STI2D n'a jamais été en dessous de 83 % 🤔 ?\n\n");
    printf(" _____________________\n" );
    printf("|  _________________  |\n" );
    printf("| | ");printf("\033[0;33m");printf("83%?");printf("\033[0m");printf("            | |\n" );
    printf("| | ");printf("\033[0;31m");printf("____");printf("\033[0m");printf("       ");printf("\033[0;33m");printf("96%?");printf("\033[0m");printf(" | |\n" );
    printf("| | ");printf("\033[0;31m");printf("|  |");printf("\033[0m");printf(" ");printf("\033[0;33m");printf("62%?");printf("\033[31m");printf("  ____");printf("\033[0m");printf(" | |\n" );
    printf("| | ");printf("\033[0;31m");printf("|  | ____  |  | ");printf("\033[0m");printf("| |\n" );
    printf("| | ");printf("\033[0;31m");printf("|  | |  |  |  | ");printf("\033[0m");printf("| |\n" );
    printf("| |");printf("\033[0;31m");printf("_|__|_|__|__|__|_");printf("\033[0m");printf("| |\n" );
    printf("|  __ __ __ __ __ __  |\n" );
    printf("| |__|__|__|__|__|__| |\n" );
    printf("| |__|__|__|__|__|__| |\n" );
    printf("| |__|__|__|__|__|__| |\n" );
    printf("| |__|__|__|__|__|__| |\n" );
    printf("| |__|__|__|__|__|__| |\n" );
    printf("| |__|__|__|__|__|__| |\n" );
    printf("|  ___ ___ ___   ___  |\n" );
    printf("| | ");printf("\033[0;34m");printf("7");printf("\033[0m");printf(" | ");printf("\033[0;34m");printf("8");printf("\033[0m");printf(" | ");printf("\033[0;34m");printf("9");printf("\033[0m");printf(" | | ");printf("\033[0;34m");printf("+");printf("\033[0m");printf(" | |\n" );
    printf("| |___|___|___| |___| |\n" );
    printf("| | ");printf("\033[0;34m");printf("4");printf("\033[0m");printf(" | ");printf("\033[0;34m");printf("5");printf("\033[0m");printf(" | ");printf("\033[0;34m");printf("6");printf("\033[0m");printf(" | | ");printf("\033[0;34m");printf("-");printf("\033[0m");printf(" | |\n" );
    printf("| |___|___|___| |___| |\n" );
    printf("| | ");printf("\033[0;34m");printf("1");printf("\033[0m");printf(" | ");printf("\033[0;34m");printf("2");printf("\033[0m");printf(" | ");printf("\033[0;34m");printf("3");printf("\033[0m");printf(" | | ");printf("\033[0;34m");printf("x");printf("\033[0m");printf(" | |\n" );
    printf("| |___|___|___| |___| |\n" );
    printf("| | ");printf("\033[0;34m");printf(".");printf("\033[0m");printf(" | ");printf("\033[0;34m");printf("0");printf("\033[0m");printf(" | ");printf("\033[0;34m");printf("=");printf("\033[0m");printf(" | | ");printf("\033[0;34m");printf("/");printf("\033[0m");printf(" | |\n" );
    printf("| |___|___|___| |___| |\n" );
    printf("|_____________________|\n\n\n\n" );
    printf("1) Vrai ✔️\n");
    printf("2) Faux ❌\n\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot2);

      if(strcmp(mot2,"Vrai") == 0){  //strcmp(mot2,"Vrai") == 0
        printf("\033[0;33m");
        printf("\nPas mal !\n\n\n");
       printf(" d8b                                     \n");     
       printf(" ?88                                      \n");    
       printf("  88b                                       \n");  
       printf("  888888b     88bd88b   d888b8b    ?88   d8P   d8888b \n");
       printf("  88P `?8b    88P'    `d8P' ?88    d88  d8P'  d8P' ?88\n");
       printf(" d88,  d88   d88       88b  ,88b   ?8b ,88'   88b  d88\n");
       printf("d88'`?88P'  d88'       `?88P'`88b`  ?888P'    `?8888P'\n\n\n\n");
        printf("\033[0m");
      
      score = score+3;
      printf("Votre score est de 3 points\n\n\n");
      }
        
      else{
        printf("\033[0;31m");
      printf("Réessaye pour voir !           ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
      printf("                               ████▌▄▌▄▐▐▌█████\n");
      printf("                               ████▌▄▌▄▐▐▌▀████\n");
      printf("                               ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
        printf("\033[0m");
        printf("Votre score est de %d points\n\n\n",scoren);
      }

    printf( "Bravo tu peux continuer comme ça s'il te plaît. (0 Recommencez / 1 Continuer) : " );
         fflush( stdout );
        scanf( "%d", & editedValue );
        if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
    
    printf("\n4. Quel est la marque de smartphone qui as vendu le plus d'appareils dans le monde ?\n\n");
  printf("               ________\n");
  printf("             .' /  /   )\n");
  printf("            /  /##/   /|\n");
  printf("           /  `--'   / |\n");
  printf("          /");printf("\033[0;34m");printf("__ __ __");printf("\033[0m");printf(" /  |\n");
  printf("         /");printf("\033[0;34m");printf("/_//_//_/");printf("\033[0m");printf("/  /\n");
  printf("        /");printf("\033[0;34m");printf("/_//_//_/");printf("\033[0m");printf("/  /______ ");printf("\033[0;32m");printf("Listening end\n");printf("\033[0m");
  printf("       /");printf("\033[0;34m");printf("/_//_//_/");printf("\033[0m");printf("/  /\n");
  printf("      /");printf("\033[0;34m");printf("/_//_//_/");printf("\033[0m");printf("/  /\n");
  printf("     /         /  /________ ");printf("\033[0;32m");printf("Buttons\n");printf("\033[0m");
  printf("    /   .-.   /  /\n");
  printf("   /   /#/   /  /\n");
  printf("  /   `-'   /  /\n");
  printf(" / .====.  /  /______ ");printf("\033[0;32m");printf("Speaking end\n");printf("\033[0m");
  printf("|`--------'  /\n");
  printf("'.   ,     .'\n");
  printf("  `-//----'_____ ");printf("\033[0;32m");printf("Disconnect button\n");printf("\033[0m");
  printf("   //\n");
  printf("  //\n");
  printf(" ((");printf("\033[0;31m");printf("))");printf("\033[0m");printf("\n");
  printf(" ");printf("\033[0;31m");printf("((");printf("\033[0m");printf("))\n");
  printf(" ((");printf("\033[0;31m");printf("))");printf("\033[0m");printf(" \n");
  printf(" ");printf("\033[0;31m");printf("((");printf("\033[0m");printf("))______ ");printf("\033[0;32m");printf("The usual messy stuff (much longer IRL)\n");printf("\033[0m");
  printf(" ((");printf("\033[0;31m");printf("))");printf("\033[0m");printf("\n");
  printf(" ");printf("\033[0;31m");printf("((");printf("\033[0m");printf("))             ");printf("\033[0;31m");printf("|\n");printf("\033[0m");
  printf(" ((");printf("\033[0;31m");printf("))");printf("\033[0m");printf("             ");printf("\033[0;31m");printf("|\n");printf("\033[0m");
  printf(" ");printf("\033[0;31m");printf("((");printf("\033[0m");printf("))             ");printf("\033[0;31m");printf("|\n");printf("\033[0m");
  printf(" ((");printf("\033[0;31m");printf("))");printf("\033[0m");printf("        .--.");printf("\033[0;31m");printf("||\n");printf("\033[0m");
  printf(" ");printf("\033[0;31m");printf("((");printf("\033[0m");printf("))        |  |");printf("\033[0;31m");printf("|| \n");printf("\033[0m");
  printf(" ((");printf("\033[0;31m");printf("))");printf("\033[0m");printf("       ");printf("\033[0;31m");printf(".");printf("\033[0m");printf("|  |");printf("\033[0;31m");printf("||");printf("\033[0m");printf("________ ");printf("\033[0;32m");printf("Wall\n");printf("\033[0m");
  printf(" ");printf("\033[0;31m");printf("((");printf("\033[0m");printf("))     ");printf("\033[0;31m");printf(".'.");printf("\033[0m");printf("|  |");printf("\033[0;31m");printf("||\n");printf("\033[0m");
  printf(" ((");printf("\033[0;31m");printf("))___.'");printf("\033[0m");printf(".' `--'");printf("\033[0;31m");printf("||\n");printf("\033[0m");
  printf("  `------'        ");printf("\033[0;31m");printf("|\n");printf("\033[0m");
  printf("                  ");printf("\033[0;31m");printf("|\n");printf("\033[0m");
  printf("                  ");printf("\033[0;31m");printf("|\n\n\n\n");printf("\033[0m");
    printf("Entrer votre réponse : ");
    scanf("%s", mot3);
      if(strcmp(mot3,"Apple") == 0){
      printf("Apple bat tous les records de vente avec l'Iphone 12 en 2020\n\n\n");
        printf("\033[0;33m");
      printf(" d8b                                     \n");     
       printf(" ?88                                      \n");    
       printf("  88b                                       \n");  
       printf("  888888b     88bd88b   d888b8b    ?88   d8P   d8888b \n");
       printf("  88P `?8b    88P'    `d8P' ?88    d88  d8P'  d8P' ?88\n");
       printf(" d88,  d88   d88       88b  ,88b   ?8b ,88'   88b  d88\n");
       printf("d88'`?88P'  d88'       `?88P'`88b`  ?888P'    `?8888P'\n\n\n\n");
        printf("\033[0m");
      score = score+6;
      printf("Votre score est de 6 points\n");
      }
        
      else{
        printf("\033[0;31m");
      printf("Réessaye pour voir !           ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
      printf("                               ████▌▄▌▄▐▐▌█████\n");
      printf("                               ████▌▄▌▄▐▐▌▀████\n");
      printf("                               ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
        printf("\033[0m");
        printf("Votre score est de %d points\n\n\n",scoren);
      }
         printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n\n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
  
      printf("\n5. Classer ces villes par ordre de densité de population dans l'ordre décroissant ?\n\n");
      printf("Mexico Tokyo Chicago Manille\n\n\n\n");
      printf("              ");printf("\033[0;33m");printf("_________\n");printf("\033[0m");
      printf("             ");printf("\033[0;33m");printf("|MMMMMMMMM|                _\n");printf("\033[0m");
      printf(" ");printf("\033[0;33m");printf("________    ");printf("\033[0;33m");printf("|MMMMMMMMM|              ");printf("\033[0;33m");printf("_|l|_\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!!!!!!_|");printf("\033[0m");printf("___");printf("\033[0;33m");printf("|MMMMMMMMM|             ");printf("\033[0;33m");printf("|lllll|\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!!!!!");printf("\033[0m");printf("|=========");printf("\033[0;33m");printf("|MMMMM|             ");printf("\033[0;33m");printf("|lllll");printf("\033[0m");printf("|_______\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!!!!!");printf("\033[0m");printf("|=========");printf("\033[0;33m");printf("|MMMMM|            ");printf("\033[0;33m");printf("_|lllll");printf("\033[0m");printf("|HHHHHHH|\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!!!!!");printf("\033[0m");printf("|=========");printf("\033[0;33m");printf("|MMMMM|");printf("\033[0m");printf("   ________");printf("\033[0;33m");printf("|lllllllll");printf("\033[0m");printf("|HHHHH|\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!!!!!");printf("\033[0m");printf("|=========");printf("\033[0;33m");printf("|MMMMM|");printf("\033[0m");printf("  |unununun");printf("\033[0;33m");printf("|lllllllll");printf("\033[0m");printf("|HHHHH|");printf("\033[0;33m");printf("______\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!!!!!");printf("\033[0m");printf("|=========");printf("\033[0;33m");printf("|MMMMM|");printf("\033[0m");printf("  |nunununu");printf("\033[0;33m");printf("|lllllllll");printf("\033[0m");printf("|HH");printf("\033[0;33m");printf("|:::::::::|\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!!!!!");printf("\033[0m");printf("|=========");printf("\033[0;33m");printf("|MMM__|");printf("\033[0m");printf("..|un__unun");printf("\033[0;33m");printf("|lllllllll");printf("\033[0m");printf("|HH");printf("\033[0;33m");printf("|:::::::::|\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!!!!!");printf("\033[0m");printf("|=======_=");printf("\033[0;33m");printf("|M_( ')' );' .)");printf("\033[0m");printf("unu");printf("\033[0;33m");printf("|lllllllll");printf("\033[0m");printf("|HH");printf("\033[0;33m");printf("|:::::::::|\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!!_!!");printf("\033[0m");printf("|======( )");printf("\033[0;33m");printf("|(. ` ,) (_ ', )");printf("\033[0m");printf("un");printf("\033[0;33m");printf("|lllllllll");printf("\033[0m");printf("|HH");printf("\033[0;33m");printf("|:::::::::| ~~~\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!!");printf("\033[0;32m");printf("(.)!");printf("\033[0m");printf("|===__");printf("\033[0;32m");printf("(`.')");printf("\033[0;33m");printf("_");printf("\033[0;32m");printf("(_ ')_,)(. _)");printf("\033[0m");printf("unu");printf("\033[0;33m");printf("|lllllllll");printf("\033[0m");printf("|HH");printf("\033[0;33m");printf("|:__::::::|~~  ~~\n");printf("\033[0m");
      printf("");printf("\033[0;33m");printf("|!");printf("\033[0;332m");printf("(.`')");printf("\033[0m");printf("|==");printf("\033[0;32m");printf("( .)' .)");printf("\033[0;33m");printf("MMM|M||");printf("\033[0m");printf(" |un|nunun");printf("\033[0;33m");printf("|lllllllll");printf("\033[0m");printf("|``");printf("\033[0;33m");printf("|");printf("\033[0;32m");printf("( ,)_::::| ~~~~ ~\n");printf("\033[0m");
      printf(" ");printf("\033[0;33m");printf("-");printf("\033[0;32m");printf("(: _)");printf("\033[0m");printf("|=");printf("\033[0;32m");printf("(`. ')_)");printf("\033[0;33m");printf("|---|- '");printf("\033[0m");printf("  ``|`````");printf("\033[0;33m");printf("|lll____ll");printf("\033[0m");printf("|  ");printf("\033[0;32m");printf("(_; `'):::|~~~  ~~~\n");printf("\033[0m");
      printf("    |  |==(_'_)|=|    ______        ''           ");printf("\033[0;33m");printf("|");printf("\033[0;32m");printf("(_'_)::::|~~~~__|)__\n");printf("\033[0m");
      printf("    |   ''''|''o/`.-``~~~~~ ``-.         ``|``````        /________/\n");
      printf("            |  h ( `; ~~~ ~~  ~ )                    ' --   __________|~\n");
      printf("      ");printf("\033[0;32m");printf("--   *      '-.._~~__~..-'   --           -* -     /  ~~~~ ~~~~~~\n");printf("\033[0m");
      printf("");printf("\033[0;32m");printf("*   -   -      --           ----         ---         _.-'~~~~~     ~ ~~\n");printf("\033[0m");
      printf("__--_________............-------------'''''''''''''''` ~~~~~    ~~~ ~~~~\n");
      printf("~~    ~~~~~~~~     ~~~~~~~   ~~~~~~~~~   ~~~~~~~~~~      ~~~~~~~     ~~~\n");
      printf("~~~~~~~~~  ~~~~  ~~~~~ ~~~~~~~~~ ~ ~      ~~~~~~ ~~~~~~     ~~~~    ~~~~\n");
      printf("~~~~~~~~     ~~~~~~~~~~~~~~~        ~~~~~~~~~~~~ ~~~~~~  ~~~ ~~~~~~  ~~~\n\n\n\n");
 
    printf("Entrer votre réponse : ");
    scanf("%s", mot4);

      if(strcmp(mot4,"Tokyo,Manille,Mexico,Chicago") == 0){
      printf("\nTokyo: 37millions d'habitants\n Manille: 28 millions d'habitants \nMexico: 8 millions d'habitants \nChicago: 2 millions d'habitants\n\n");
        printf("\033[0;33m");
        printf("\nPas mal !\n\n\n");
       printf(" d8b                                     \n");     
       printf(" ?88                                      \n");    
       printf("  88b                                       \n");  
       printf("  888888b     88bd88b   d888b8b    ?88   d8P   d8888b \n");
       printf("  88P `?8b    88P'    `d8P' ?88    d88  d8P'  d8P' ?88\n");
       printf(" d88,  d88   d88       88b  ,88b   ?8b ,88'   88b  d88\n");
       printf("d88'`?88P'  d88'       `?88P'`88b`  ?888P'    `?8888P'\n\n\n\n");
        printf("\033[0;0m");
      score = score+4;
      printf("Votre score est de 4 points\n\n\n\n");
      }
        
      else{
        printf("\033[0;31m");
      printf("Réessaye pour voir !           ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
      printf("                               ████▌▄▌▄▐▐▌█████\n");
      printf("                               ████▌▄▌▄▐▐▌▀████\n");
      printf("                               ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
        printf("\033[0;0m");
      printf("\nTokyo: 42millions d'habitants\nManille: 28 millions d'habitants \nMexico: 8 millions d'habitants \nChicago: 2 millions d'habitants\n");
        printf("\nVotre score est de %d points\n\n\n",scoren);
      }
  
      printf( "Bravo tu peux continuer comme ça s'il te plaît. (0 Recommencez / 1 Continuer) : \n\n\n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
        if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
    printf("\n6. Quelle est la signification de WWW dans une adresse internet ?\n\n"); //question nina
    printf("||   / |  / / ||   / |  / / ||   / |  / / \n"); 
    printf("||  /  | / /  ||  /  | / /  ||  /  | / / \n"); 
    printf("|| / /||/ /   || / /||/ /   || / /||/ / \n");
    printf("||/ / |  /    ||/ / |  /    ||/ / |  / \n");
    printf("|  /  | /     |  /  | /     |  /  | / \n");
    printf("| /   |/      | /   |/      | /   |/ \n\n\n\n");
    printf("1) Web Wide Worst\n");
    printf("2) World Wide Web\n");
    printf("3) Wild West Web\n");
    printf("4) Je ne sais pas\n\n");
    printf("Entrer votre reponse : \n\n");
    scanf("%d", &ans6);

      if(ans6==2){
      //printf("\nPas mal\n\n");
      printf("\nBonne réponse ! On peut traduire World Wide Web par la toile d’araignée mondiale 🕸️\n\n");
      printf(" d8b                                     \n");     
       printf(" ?88                                      \n");    
       printf("  88b                                       \n");  
       printf("  888888b     88bd88b   d888b8b    ?88   d8P   d8888b \n");
       printf("  88P `?8b    88P'    `d8P' ?88    d88  d8P'  d8P' ?88\n");
       printf(" d88,  d88   d88       88b  ,88b   ?8b ,88'   88b  d88\n");
       printf("d88'`?88P'  d88'       `?88P'`88b`  ?888P'    `?8888P'\n\n\n\n");
      score = score+3;
      printf("Votre score est de 3 points\n\n\n");
      }
  
      else if(ans11!=2){
      printf("\nMauvaise réponse ! On peut traduire World Wide Web par la toile d’araignée mondiale 🕸️       ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
      printf("                                                                                               ████▌▄▌▄▐▐▌█████\n");
      printf("                                                                                               ████▌▄▌▄▐▐▌▀████\n");
      printf("                                                                                               ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
      printf("\nVotre score est de %d points\n\n\n",scoren);
      
      }
      else{
      printf("Invalide\n\n");
      }
      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n\n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
  
    printf("7. De quand date l'apparition du premier écran Plasma?\n\n");
    printf("                    o\n");
    printf("               o   /\n");
    printf("               |  /\n");
    printf("               | /\n");
    printf("               |/\n");
    printf("+--------------v-------------+\n");
    printf("|  __________________      @ |\n");
    printf("| /                  |       |\n");
    printf("| |             ,--, |  (V)  |\n");
    printf("| |       _ ___/ /.| |       |\n");
    printf("| |   ,;`( )__, )  ~ |  (-)  |\n");
    printf("| |  // o//   '--;   |       |\n");
    printf("| |  ' o |     |     / :|||: |\n");
    printf("|  -ooo--------------  :|||: |\n");
    printf("+----------------------------+\n");
    printf("   []                    []\n\n\n\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot5);

      if(strcmp(mot5,"1964") == 0){
      printf("La première vrai apparition de l'écran Plasma se fera a partir de 1964\n\n");
      printf(" d8b                                     \n");     
       printf(" ?88                                      \n");    
       printf("  88b                                       \n");  
       printf("  888888b     88bd88b   d888b8b    ?88   d8P   d8888b \n");
       printf("  88P `?8b    88P'    `d8P' ?88    d88  d8P'  d8P' ?88\n");
       printf(" d88,  d88   d88       88b  ,88b   ?8b ,88'   88b  d88\n");
       printf("d88'`?88P'  d88'       `?88P'`88b`  ?888P'    `?8888P'\n\n\n\n");
      score = score+6;
      printf("Votre score est de 6 points\n\n\n\n");
      }else{
      printf("Réessaye pour voir !           ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
      printf("                               ████▌▄▌▄▐▐▌█████\n");
      printf("                               ████▌▄▌▄▐▐▌▀████\n");
      printf("                               ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
      printf("\nVotre score est de %d points\n\n\n",scoren);
      
      }
      
  printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
    printf("8. Classez ces équipes nationales par le nombre de victoires à la Coupe du Monde.\n\n");
    printf("    ___________________________\n");
    printf("   |             |             |\n" );
    printf("   |___          |          ___|\n" );
    printf("   |_  |         |         |  _|\n" );
    printf("  .| | |.       ,|.       .| | |.\n" );
    printf("  || | | )     ( | )     ( | | ||\n" );
    printf("  '|_| |'       `|'       `| |_|'\n" );
    printf("   |___|         |         |___|\n" );
    printf("   |             |             |\n" );
    printf("   |_____________|_____________|\n\n\n" );
  

      printf("Uruguay, Portugal, Espagne, Italie\n\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot6);

      if(strcmp(mot6,"Italie,Uruguay,Espagne,Portugal") == 0){
      printf("\nItalie: 4 Victoire en coupe du monde\n Uruguay: 2 Victoire en coupe du monde \nEspagne: 1 Victoire en Coupe du monde \nPortugal : Encore aucune Victoire a son actif en Coupe du monde\n");
       printf("\nPas mal !\n\n\n");
      printf(" d8b                                     \n");         // L85 à L91 affichage des caractères
       printf(" ?88                                      \n");    
       printf("  88b                                       \n");  
       printf("  888888b     88bd88b   d888b8b    ?88   d8P   d8888b \n");
       printf("  88P `?8b    88P'    `d8P' ?88    d88  d8P'  d8P' ?88\n");
       printf(" d88,  d88   d88       88b  ,88b   ?8b ,88'   88b  d88\n");
       printf("d88'`?88P'  d88'       `?88P'`88b`  ?888P'    `?8888P'\n\n\n\n");
      score = score+4;
      printf("Votre score est de 4 points\n\n\n\n");
      }
        
      else{
      printf("Réessaye pour voir  !          ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
              printf("                       ████▌▄▌▄▐▐▌█████\n");
      printf("                               ████▌▄▌▄▐▐▌▀████\n");
      printf("                               ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
       
      
      printf("\nItalie: 4 Victoire en coupe du monde \nUruguay: 2 Victoire en coupe du monde \nEspagne: 1 Victoire en Coupe du monde  \nPortugal : Encore aucune Victoire a son actif en Coupe du monde\n");
        printf("\nVotre score est de %d points\n\n\n",scoren);
      
      
      }

      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
  
printf("9. Combien de particules de plastique ingérons-nous par semaine en raison de la pollution plastique dans l'environnement ?\n\n");    //question nina
     
    printf("1) L'équivalent d'un capuchon de stylo\n");
    printf("2) L'équivalent d'une carte de crédit\n");
    printf("3) lL'équivalent d'une grande bouteille d'eau\n");
    printf("Entrer votre reponse : ");
    scanf("%d", &ans9);

      if(ans9==2){
      printf("Bonne réponse ! Une nouvelle étude du WWF révèle que l'être humain ingère environ 5 grammes de plastique par semaine soit l'équivalent d'une carte de crédit\n");
      score = score+4;
      printf("Votre score est de 4 points\n\n\n\n");  
      }

      else if(ans9!=2){
      printf("Mauvaise réponse ! Une nouvelle étude du WWF révèle que l'être humain ingère environ 5 grammes de plastique par semaine soit l'équivalent d'une carte de crédit\n");
      
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }
       else{
       printf("Invalide\n\n");
       }

      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
      printf("10. Le Liechtenstein est plus grand en superficie que l'Andorre🤔 ?\n\n");
    printf("1) Vrai ✔️\n");
    printf("2) Faux ❌\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot7);

      if(strcmp(mot7, "Faux") == 0){  //strcmp(mot2,"Vrai") == 0
      printf("\nBien joué !  160 km² pour le Lichtenstein et 468 km² pour l'Andorre.\n");
      score = score+4;
      printf("\nVotre score est de 4 points\n\n\n");
      }
       
      else{
      printf("Faux ! 160 km² pour le Lichtenstein et 468 km² pour l'Andorre\n");
      
        printf("\nVotre score est de %d points\n\n\n",scoren);
        }
        printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
      printf("11. Quel est la plus grande entreprise asiatique ?\n\n");
      printf("Entrer votre réponse : ");
      scanf("%s", mot8);
      if(strcmp(mot8,"Toyota") == 0){
      printf("Toyota Fondée au japon est la plus grande entreprise asiatique\n");
      score = score+6;
      printf("\nVotre score est de 6 points\n");
      }
      else{
      printf("Toyota étais la bonne réponse");
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }

      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
    printf("12. Quel est le plus léger des gaz du tableau périodique derrière l'hydrogène ?\n\n");    
           //question nina
     
    printf("1) Gallium\n");
    printf("2) L'Oxygène\n");
    printf("3) Hélium\n");
    printf("4) Brome\n");
    printf("\nEntrer votre reponse : ");
    scanf("%d", &ans12);

      if(ans12==3){
      printf("Bonne réponse ! L'hélium à une densité de 0.14 par rapport à l'air, c'est pourquoi un ballon d'hélium s'envole dans le ciel 🎈\n");
      score = score+3;
      printf("Votre score est de 3 point\n\n\n\n");  
      }

      else if(ans12!=3){
      printf("Mauvaise réponse ! L'hélium à une densité de 0.14 par rapport à l'air, c'est pourquoi un ballon d'hélium s'envole dans le ciel 🎈\n");
      
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }
      else{
      printf("Invalide\n\n");
      }
      
  
  printf("Bravo ! Votre score est de %d \n\n\n", score);

  
      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
      printf("13. En STI2D y'a t-il 4 spécialités ?\n\n");
    printf("1) Oui ✔️\n");
    printf("2) Non ❌\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot9);

      if(strcmp(mot9, "Oui") == 0){  //strcmp(mot2,"Vrai") == 0
      printf("\nVrai ! EE,EC,ITEC,SIN.\n");
     score = score+3;
      printf("\nVotre score est de 3 points\n\n\n");
      }
       
      else{
      printf("Faux ! EE,EC,ITEC,SIN \n");
      
        printf("\nVotre score est de %d points\n\n\n",scoren);
        }
        printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
  
      printf("\n14.Classez ces grand personnages historiques du plus au moins riche de pouvoir👑.\n\n");
      printf("Qin Shi Huang, Jules César, Louis XIV, Ramsès II\n\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot10);

      if(strcmp(mot10,"Ramsès_II,Qin_Shi_Huang,Louis_XIV,Jules_César") == 0){
      printf("\nRamsès II: Dieu\n Qin Shi Huang: Empereur\nLouis XIV: Roi/Monarque Absolu\n\n");
      score = score+3;
      printf("Votre score est de 3 points\n\n\n\n");
      }
        
      else{
      printf("Réessaye pour voir\n\n");
      printf("\nRamsès II: Dieu\n Qin Shi Huang: Empereur\nLouis XIV: Roi/Monarque Absolu\n\n");
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }

  
        printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
      printf("15. Quel est la Capitale des Bahamas ?\n\n");
      printf("Entrer votre réponse : ");
      scanf("%s", mot11);
      if(strcmp(mot11,"Nassau") == 0){
      printf("Nassau est la Capitales Des Bahamas\n");
      score = score+6;
      printf("Votre score est de 4 points\n");
      }
      else{
      
      printf("\n non la Capitale Des Bahamas et Nassau");
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }
      
  printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
      

printf("16. Lequel de ces aliments est le plus calorique à quantité égale ?\n\n");    //question nina
     
    printf("1) L'ananas\n");
    printf("2) La cerise\n");
    printf("3) la figue\n");
    printf("4) L'avocat\n\n");
     
    printf("Entrer votre reponse : ");
    scanf("%d", &ans15);

      if(ans15==4){
      printf("Bonne réponse ! L’avocat a un rapport calorique de 200 calories, soit environ 3 à 4 fois plus que les autres aliments proposés\n");
      score = score+3;
      printf("Votre score est de 3 point\n\n\n\n");  
      }

      else if(ans15!=4){
      printf("Mauvaise réponse ! L’avocat a un rapport calorique de 200 calories, soit environ 3 à 4 fois plus que les autres aliments proposés\n");
      
      printf("\nVotre score est de %d points\n\n\n",scoren);
       }
       else{
       printf("Invalide\n\n");
       }

    printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
    printf("17. La combustion de la biomasse produit directement de l’électricité.\n\n");
    printf("1) Vrai ✔️\n");
    printf("2) Faux ❌\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot12);

      if(strcmp(mot12,"Faux") == 0){  //strcmp(mot2,"Vrai") == 0
      printf("\nLa combustion fait chauffer des chaudières d’eau afin de créer de la vapeur qui, à son tour, fera tourner une turbine afin de produire ultimement de l’électricité.\n");
      score = score+3;
      printf("Votre score est de 3 points\n\n\n");
      }
        
      else{
      printf("\nDésolé ! Mauvaise réponse. La réponse est FAUX");
printf("La combustion fait chauffer des chaudières d’eau afin de créer de la vapeur qui, à son tour, fera tourner une turbine afin de produire ultimement de l’électricité.\n");
        printf("\nVotre score est de %d points\n\n\n",scoren);
      
      }
  
      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
  printf("\n18. Classez ces types de LED 🚨 par récence.\n\n");
      printf("LED DIP LED COB  LED SMD  LED DIP\n\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot13);

      if(strcmp(mot13,"LED COB,LED HIGH POWER,LED SMD,LED DIP") == 0){
      printf("\nLED COB,LED HIGH POWER,LED SMD,LED DIP\n\n");
      score = score+4;
      printf("Votre score est de 4 points\n\n\n\n");
      }
        
      else{
      printf("Réessaye pour voir\n\n");
      printf("\nLED_COB,LED_HIGH_POWER,LED_SMD,LED_DIP\n\n");
      
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }

      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
  
    printf("19. Quelle est la ville la plus haute du monde ?\n\n");
      printf("Entrer votre réponse : ");
      scanf("%s", mot14);
      if(strcmp(mot14,"La Rinconada") == 0){
      printf("La ville de La Rinconada au Pérou et située entre 4 750 m et 5 300 m\n");
      score = score+6;
      printf("Votre score est de 3 points\n");
      }
      else{
      
      printf("\nLa ville de La Rinconada au Pérou et située entre 4 750 m et 5 300 m\n");
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }
  
      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
  

printf("20.	On estime qu’un être humain a besoin de 50 à 100 litres d’eau par jour. Quelle est la consommation moyenne par habitant aux Etats-Unis ?\n\n");    //question nina
     
    printf("1) Environ 450  litres\n");
    printf("2) Environ 100 litres\n");
    printf("3) Environ 250 litres\n\n");
    printf("Entrer votre reponse : ");
    scanf("%d", &ans20);

      if(ans20==1){
      printf("Bonne réponse ! 💧\n\nEffectivement le classement des pays sont : Les Etats-Unis\n\nLe Canada\n\nLe Japon\n\nLa consommation moyenne est estimée envrion à 450L");
        
      score = score+3;
      printf("\nVotre score est de 3 point\n\n");  
      }

      else if(ans20!=1){
      printf("Mauvaise réponse ! 💧\n\nEffectivement le classement des pays sont : Les Etats-Unis\n\nLe Canada\n\nLe Japon\n\nLa consomation moyenne est estimée envrion à 450L");
        
      
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }
      else{
      printf("Invalide\n\n");
      }

    printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
    printf("21. La marque de voiture la plus ancienne est Ford.\n\n");
    printf("1) Vrai ✔️\n");
    printf("2) Faux ❌\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot15);

      if(strcmp(mot15, "Faux") == 0){  //strcmp(mot2,"Vrai") == 0
      printf("\nVrai !  La marque de voiture la plus ancienne est Peugeot\n");
     score = score+3;
      printf("\nVotre score est de 3 points\n\n\n");
      }
       
      else{
      printf("Faux ! C'était Peugeot la marque la plus ancienne  \n");
      
        printf("\nVotre score est de %d points\n\n\n",scoren);
        }

    printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
       printf("\n22. Classez ces types de langage🖥️ par le nombre de caractères différents qui les composent.\n\n");
      printf("Décimal, Hexadecimal , Binaire , Octal\n\n");
    printf("Entrer votre réponse : ");
    scanf("%s", mot16);

      if(strcmp(mot16,"Hexadecimal,Décimal,Octal,Binaire") == 0){
      printf("\nHexadécimal (16) > Décimal (10) < Octal (8) < Binaire (2)P\n\n");
      score = score+4;
      printf("Votre score est de 4 points\n\n\n\n");
      }
        
      else{
      printf("Réessaye pour voir la Réponse etait :\n\n");
      printf("\nHexadécimal (16) > Décimal (10) < Octal (8) < Binaire (2)\n\n");
      
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }
    
      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }

  
      printf("23. Quelle est l'agence  de voyage la plus utilisé en 2022 ?\n\n");
      printf("Entrer votre réponse : ");
      scanf("%s", mot17);
      if(strcmp(mot17,"Evaneos") == 0){
      printf("Evaneos est l'agence de voyage la plus utilisé en 2022 \n");
      score = score+6;
      printf("Votre score est de 3 points\n");
      }
      else{
      
      printf("\n Faux , Evaneos est l'agence de voyage la plus utilisé en 2022\n");
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }

    printf("24.	Le WiFi circule via :\n\n");    //question nina
     
    printf("1) Le fil de cuivre\n");
    printf("2) La fibre optique\n");
    printf("3) Le Bluetooth\n");
    printf("4) Les ondes électromagnétiques\n\n");

    printf("Entrer votre reponse : ");
    scanf("%d", &ans24);

      if(ans24==4){
      printf("Bonne réponse !\n\nUn réseau Wi-Fi utilise des ondes radio (appartenant aux dommaines des ondes électromagnétiques) pour transmettre des données à travers un réseau.");

      score = score+3;

      printf("Votre score est de 3 point\n\n\n\n");  
      }

      else if(ans24!=4){
      printf("Mauvaise réponse !\n\nUn réseau Wi-Fi utilise des ondes radio (appartenant aux dommaines des ondes électromagnétiques) pour transmettre des données à travers un réseau. La bonne réponse est donc la réponse 4");

      
      printf("\nVotre score est de %d points\n\n\n",scoren);
      }
      else{
      printf("Invalide\n\n");
      }

      printf( "Bravo ce n'est que le début. (0 Recommencez / 1 Continuer) : \n\n" );
         fflush( stdout );
        scanf( "%d", & editedValue );
       if(editedValue==0){
        printf("Tu arrête le Quizz");
        return 0;
      }
      printf("BRAVO TU AS GAGNÉ, TON SCORE EST DE %d",score);
      
    

  
printf("__ZZZZZZZZ_________________________________________________ZZZZZZZZ\n");
printf("_ZZZZZZZZZZZZZZ_______________________________________ZZZZZZZZZZZZZZZ\n");
printf("_ZZZZZZZZZZZZZZZZZ_________________________________ZZZZZZZZZZZZZZZZZZ\n");
printf("__ZZZZZZZZZZZZZZZZZZ____________________________ZZZZZZZZZZZZZZZZZZZZ\n");
printf("___ZZZZZZZZZZZZZZZZZZZZ____ZZ___________ZZ____ZZZZZZZZZZZZZZZZZZZZZ\n");
printf("____ZZZZZZZZZZZZZZZZZZZZZ__ZZZ_________ZZZ__ZZZZZZZZZZZZZZZZZZZZZ\n");
printf("_____ZZZZZZZZZZZZZZZZZZZZZZ__ZZZ______ZZ__ZZZZZZZZZZZZZZZZZZZZZZ\n");
printf("______ZZZZZZ______ZZZZZZZZZZZ__ZZ____ZZ_ZZZZZZZZZZ________ZZZZZ\n");
printf("_______ZZZZ_________ZZZZZZZZZZ__ZZ__ZZ_ZZZZZZZZZ_________ZZZZZ\n");
printf("________ZZZZ_________ZZZZZZZZZZ_ZZZZZZ_ZZZZZZZZ_________ZZZZZZ\n");
printf("________ZZZZ_________ZZZZZZZZZZZ_ZZZZ_ZZZZZZZZZZ________ZZZZZ\n");
printf("________ZZZZZ________ZZZ______ZZZZZZZZZZ_______ZZ_______ZZZZZ\n");
printf("_________ZZZZ______ZZ________ZZZZZZZZZZZZ________ZZZZZZZZZZZZ\n");
printf("_________ZZZZZZZZZZ____ZZZZZZZZZZZZZZZZZZZZZZZZZZ_______ZZZZ\n");
printf("__________ZZZZZZZZZZZZZZZZZ_____ZZZZ_____ZZZZZZZZZZZZZZZZZZ\n");
printf("____________ZZZZZZZ__ZZZZZ_______ZZZZ_______ZZZZZZ__ZZZZZZZ\n");
printf("_________________BRAVO___TU___AS___FINIS___L'AVENTURE_______\n");
printf("___________________ZZZZZ________ZZZZZZ________ZZZZZZ___ZZZ\n");
printf("______________ZZZZZZZZ_________ZZZZZZ_Z_________ZZZZZZZ\n");
printf("____________ZZZZZZZZZ_________Z_ZZZZZZ_Z_________ZZZZZZZZ\n");
printf("___________ZZZZZZZZZZ________Z_ZZZZZZZ_ZZ_________ZZZZZZZZ\n");
printf("__________ZZZZZZZZZZZZ______Z__ZZZZZZ_Z_Z________ZZZZZZZZZZ\n");
printf("__________ZZZZZZZZZZZZ_____Z__Z_ZZZZZ_Z__ZZ_____ZZZZZZZZZZZ\n");
printf("__________ZZZZZZZZZZZZZZZZZ__ZZ__ZZZZ__Z___ZZ____ZZZZZZZZZZ\n");
printf("___________ZZZZZZZZZ_________Z___ZZZ___ZZ_____ZZZ__ZZZZZZZZ\n");
printf("____________ZZZZZZ__________ZZ____ZZ____ZZZZ________ZZZZZZ\n");
printf("____________ZZZZZ_________ZZZ_____Z______ZZZZ________ZZZZZ\n");
printf("_____________ZZZZ________ZZ_______________ZZZZZ______ZZZZZ\n");
printf("_____________ZZZZZ____ZZZZZ________________ZZZZZZZZZZZZZZ\n");
printf("_____________ZZZZZZZZZZZZZ__________________ZZZZZZZZZZZZZ\n");
printf("_____________ZZZZZZZZZZZZ____________________ZZZZZZZZZZZZ\n");
printf("_____________ZZZZZZZZ______________________________ZZZZZZ\n");
printf("______________ZZZZZ__________________________________ZZZ \n");


  
  



  
    /* nina

printf("24.	Le WiFi circule via :\n\n");    //question nina
     
    printf("1) Le fil de cuivre\n");
    printf("2) La fibre optique\n");
    printf("3) Le Bluetooth\n");
    printf("4) Les ondes électromagnétiques\n\n");

    printf("Entrer votre reponse : ");
    scanf("%d", &ans24);

      if(ans24==4{
      printf("Bonne réponse !\n\nUn réseau Wi-Fi utilise des ondes radio (appartenant aux dommaines des ondes électromagnétiques) pour transmettre des données à travers un réseau.");

      point24 = 6;

      printf("Votre score est de %d point\n\n\n\n", point24);  
      }

      else if(ans24!=4){
      printf("Mauvaise réponse !\n\nUn réseau Wi-Fi utilise des ondes radio (appartenant aux dommaines des ondes électromagnétiques) pour transmettre des données à travers un réseau. La bonne réponse est donc la réponse 4");

      point024 = 0;
      printf("Votre score est de %d point\n", point024);
      }
      else{
      printf("Invalide\n\n");
      }


printf("28.	D’après le code de la route, quel est le taux d’alcool à ne pas dépasser pour prendre le volant (hors permis probatoire)\n\n");    //question nina
     
    printf("1) 0.2g par litre de sang\n");
    printf("2) 0.75g par litre de sang\n");
    printf("3) 0.5g par litre de sang\n");
    printf("4) 1g par litre de sang\n\n");

    printf("Entrer votre reponse : ");
    scanf("%d", &ans24);

      if(ans28==3){
      printf("Bonne réponse !\n\nLes jeunes conducteurs ont eux une limite fixée à 0.2g d’alcool par litre de sang)
");

      point28 = 6;

      printf("Votre score est de %d point\n\n", point28);  
      }

      else if(ans28!=3){
      printf("Mauvaise réponse !\n\nLes jeunes conducteurs ont eux une limite fixée à 0.2g d’alcool par litre de sang. La bonne réponse est donc la réponse 3");

      point028 = 0;
      printf("Votre score est de %d point\n", point028);
      }
      else{
      printf("Invalide\n\n");
      }
*/

}


     



  