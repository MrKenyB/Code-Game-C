#include <iostream>

using namespace std;

int main()
{
    int choice;
    int i;
    int j;
    int choice2;
    char ZDV[10];
    char Degat;


    printf("Menu du Jeu\n---------------------------------------\n1-Joueur\n2-Charger une sauvegarde\n3-Creer un Personnage\n4-Creer une Zone de vie\n5-Quitter\n");
    printf("\tEntrez votre choix:\n");
    scanf("%d", &choice);


    while(choice<1 || choice>5){
        printf("Entrez le bon numero:\n");
        scanf("%d", &choice);
        continue;
    }

    while(choice>1 || choice<5){
            //OPTION 1
                if(choice==1){
                    printf("Debut du jeu\n");
                    printf("-------------------------------------------------------------------------\n");
                    printf("PERSONNAGE: LE CHASSEUR DE SANGOMA\nPOUVOIR SPECIAL: Capacite a invoquer les esprits des marais pour guerir les allies ou maudire les ennemis\nPOINTS DE VIE : 200\nAGILITE : Elevee\nFORCE : Moyenne\n");
                    printf("--------------------------SCENARIO---------------------------\n");
                    printf(" le chasseur de sangoma, dans sa quete de nouveau territoire pour l annexer au tien il entre en conflit avec les guerriers des hauts plateaux dans les hautes montagnes, celui-ci l inflige deja 3 impacts de degat.\n");
                    printf("-------------------------------------------------------------------------\n");
                    printf("POINTS DE VIE APRES LES TROIS COUPS + L IMPACT DES HAUTES MONTAGES : 153\n");
                    printf("-------------------------------------------------------------------------\n");

                    j=138;
                    while(j>0){
                            printf("Appuyer sur F pour fuir\n");
                            scanf("%s", &Degat);
                            printf("-------------------------------------------------------------------------\n");
                            if(Degat=='Q'){
                                printf("Vous avez fait appel a la prêtresse errante\n");
                                printf("-------------------------------------------------------------------------\n");
                                printf("PERSONNAGE: LA PRÊTRESSE ERRANTE\nPOUVOIR SPECIAL: Capacité de téléporter un personnage dans les différent zone de vie et de lui administer les soins médicaux.\nPOINTS DE VIE : 80\nAGILITE : Faible\nFORCE : Eleve\n");
                                printf("-------------------------------------------------------------------------\n");
                                printf("Appuyez sur P pour recevoir 37 % de sa force vitale");
                                if(Degat=='P'){
                                    printf("-----------------------------------");
                                    break;
                                }
                            }
                            else if(Degat=='F'){
                                printf("Vous avez fuit");
                                break;
                            }
                            else if(Degat!='F'){
                                printf("Vous avez recu un choc \nvotre point de vie est de: %d\n", j);
                            j-=15;
                            }

                    }





                    break;
                }


            //OPTION 5
            else if(choice==5){
                printf("Vous avez quitter le jeu");
                break;
            }


            //OPTION 2
            else if(choice==2){
                 printf("Aucune sauvegarde n est presente dans la base de donnees\n");
                 printf("\tEntrez votre choix:\n");
                 scanf("%d", &choice);
                 continue;
            }


            //OPTION 4
            for(i=0;i<=74;i++){
                if(choice==4){
                printf("Telechargemet a %d %\n",i=74);
                printf("----------------------------------\n");
                             }
                printf("saisi le chiffre 47 pour continuer : ");
                scanf("%d", &choice2);
                printf("----------------------------------\n");
                break;
                              }
            for(i=0;i<=100;i++){
                if(choice2!=47){
                printf("Crash du game");
                break;
                                    }
                else if(choice2==47){
                printf("Telechargemet a %d %\n",i=100);

                printf("----------------------------------\n");
                printf("Donnez un nom a la zone de vie creer\n");
                scanf("%s", &ZDV);
                printf("----------------------------------\n");
                printf("Zone de vie %s entrez avec succes", ZDV);
                continue;

                                     }
                              }
                              break;


    }

    return 0;
}
