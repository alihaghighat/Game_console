#include"header.h"
////////////////////////// The game console is based on reading map files and commands that are specified in the standard.
/*
Working method of game console:
1-Read the game map from the file and then save it to the size of the specified pointer array.
2-Read commands from the file and save in the array and the corresponding variables that array the order as follows
    order[0][j] : solid block
    order[1][j] : death block
    order[2][j] : move block
    order[3][j] : rpoint
    order[4][j] : whall
    order[5][j] : up
    order[6][j] : down
    order[7][j] : left
    order[8][j] : right
    order[9][j] : character
    order[10][j] : target
    order[11][j] : object
    order[12][j] : opp
    order[13][j] : put
    order[14][j] : exit
3-It waits for the entry, and if the character is entered, the character changes depending on the game.


*/
char ** map;
int ** locations=NULL;
int x,y;//size of map
float time_game=0;
int * AI_assist = NULL;
int y_loc_raindb=0;
char order[15][3];//for save order
int rpoint[2];
int rep_put=0;
int attack=0;
int raindb=0;
int Error[20][15];
int *x_loc_raindb=NULL;
int end=0;
int score_player1=0;
int score_ai=0;
char name_player1[50];
char ai_name[]="Computer";
int erroring=0;
int mood_cmd1=0;
int speed=115;
int main(){
    char * name_map_game[80];
    char * name_order_game[80];
    char color_cmd[9];
    int c,game_defult;
    FILE *file_str;
    int chr;
    int i=0;
    if(mood_cmd1==0)//for color of CMD
         system("color 02");
    file_str=fopen("welecom.txt","r");
        if(file_str!=NULL){
            while((chr=fgetc(file_str))!=EOF){
            putchar(chr);

        }
        printf("please wait");
        while(i!=43){
            printf("|||");
            i++;
            Sleep(150);
        }

        system("cls");
        }

        printf("Please select one of the options:\n");
        printf("1_Default games\n");
        printf("2_load your game\n");
        printf("3_settings of CMD\n");
        printf("4_game speed\n");
        printf("5_Exit\n");
        printf("please Enter :");
        scanf("%d",&c);
        Beep(750, 300);
        if(c==5){
            system("exit");//for close the  game console
        }
        if(c==4){
            //To change the game speed using the sleep change in the game view
            system("cls");
            printf("The number of inputs should be between 50 and 900.( Note: As the number increases, the game will slow down)\n*Enter the speed:");
            scanf("%d",&speed);
            if(speed<50||speed>900){
                speed=150;
                printf("The entered speed is not correct!");
            }
            Sleep(3000);
            system("cls");
            main();
        }
        if(c==1){
            system("cls");
            printf("Please choose one of the following games:\n");
            printf("1_Maze\n2_Pull Box\n3_Pacman\n4_rally-x\n5_Flight\n6_Exite\n7_back\nplease Enter choose: ");
            scanf("%d",&game_defult);
            Beep(750, 300);
            if(game_defult==1){
                Maze();
            }
            if(game_defult==2){
                pull_Box();
            }
            if(game_defult==3){
                Pacman();
            }
            if(game_defult==4){
                rally_x();
            }
            if(game_defult==5){
                Fliaght();
            }
            if(game_defult==6){
                system("exit");
            }
            if(game_defult==7){
                system("cls");
                main();
            }

        }
        if(c==2){
            system("cls");
            printf("Please enter the name of the game's map file: (less than 80 characters):");
            scanf("%s",name_map_game);
            Beep(750, 300);
            printf("Please enter the filename of the game commands: (less than 80 characters):");
            scanf("%s",name_order_game);
            Beep(750, 300);
            printf("Please enter the player name:");
            scanf("%s",name_player1);
            Beep(750, 300);
            map=read_map(map,name_map_game);
            read_order(name_order_game);

            erroring=errors();

            if(erroring==-1){
                Sleep(10000);
               system("exit");
            }
            else{
                Rpoint();
                locate();
                direction();
                Sleep(speed);
                system("cls");
                system("cls");
            }
        }
        if(c==3){
            strcpy(color_cmd,"color ");
            system("cls");
            printf("Available colors list:\n");
            printf("0 = Black       8 = Gray\n");
            printf("1 = Blue        9 = Light Blue\n");
            printf("2 = Green       A = Light Green\n");
            printf("3 = Aqua        B = Light Aqua\n");
            printf("4 = Red         C = Light Red\n");
            printf("5 = Purple      D = Light Purple\n");
            printf("6 = Yellow      E = Light Yellow\n");
            printf("7 = White       F = Bright White\n");
            printf("Please select one of the available colors for the background:");
            color_cmd[6]=getchar();
            color_cmd[6]=getchar();
            Beep(750, 300);
            printf("Please select one of the available colors for the text:");
            color_cmd[7]=getchar();
            color_cmd[7]=getchar();
            color_cmd[8]='\0';
            Beep(750, 300);
            system("cls");
            mood_cmd1=5;
            system(color_cmd);
            system("cls");
            main();





        }

    return 0;
}
