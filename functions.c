#include "header.h"
void rally_x(){
    int hardship_level;
    system("cls");
    printf("Please select one of the levels below:\n1_Easy\n2_Medium\n3_Difficult\nplease Enter choose:");
    scanf("%d",&hardship_level);
    Beep(750, 300);
    if(hardship_level==1){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-rally-x-esay.txt");
        read_order("game-rally-x-esay.txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
     if(hardship_level==3){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-rally-x-Difficult.txt");
        read_order("game-rally-x-Difficult .txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
    if(hardship_level==2){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-rally-x-Medium.txt");
        read_order("game-rally-x-Medium .txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
}
void Pacman(){
    int hardship_level;
    system("cls");
    printf("Please select one of the levels below:\n1_Easy\n2_Medium\n3_Difficult\nplease Enter choose:");
    scanf("%d",&hardship_level);
    Beep(750, 300);
    if(hardship_level==1){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-Pacman-esay.txt");
        read_order("game-Pacman-esay.txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
     if(hardship_level==3){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-Pacman-Difficult.txt");
        read_order("game-Pacman-Difficult .txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
    if(hardship_level==2){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-Pacman-Medium.txt");
        read_order("game-Pacman-Medium .txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
}
void pull_Box(){
    int hardship_level;

    system("cls");
    printf("Please select one of the levels below:\n1_Easy\n2_Medium\n3_Difficult\nplease Enter choose:");
    scanf("%d",&hardship_level);
    Beep(750, 300);
    if(hardship_level==1){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-pull_box-esay.txt");
        read_order("game-pull_box-esay.txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
     if(hardship_level==3){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-pull_box-Difficult.txt");
        read_order("game-pull_box-Difficult .txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
    if(hardship_level==2){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-pull_box-Medium.txt");
        read_order("game-pull_box-Medium .txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
}
void Maze(){
    int hardship_level;
    system("cls");
    printf("Please select one of the levels below:\n1_Easy\n2_Medium\n3_Difficult\nplease Enter choose:");
    scanf("%d",&hardship_level);
    Beep(750, 300);
    if(hardship_level==1){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-Maze-Esay.txt");
        read_order("game-Maze-esay.txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
     if(hardship_level==3){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-Maze-Difficult.txt");
        read_order("game-Maze-Difficult.txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
    if(hardship_level==2){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-Maze-Medium.txt");
        read_order("game-Maze-Medium.txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
}
void Fliaght(){
    int hardship_level;
    system("cls");
    printf("Please select one of the levels below:\n1_Easy\n2_Medium\n3_Difficult\nplease Enter choose:");
    scanf("%d",&hardship_level);
    Beep(750, 300);
    if(hardship_level==1){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-Fliaght-Esay.txt");
        read_order("game-Fliaght-esay.txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
     if(hardship_level==3){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-Fliaght-Difficult.txt");
        read_order("game-Fliaght-Difficult.txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }
    if(hardship_level==2){
        system("cls");
        printf("Please enter the player name:");
        scanf("%s",name_player1);
        Beep(750, 300);
        map=read_map(map,"map-Fliaght-Medium.txt");
        read_order("game-Fliaght-Medium.txt");
        erroring=errors();

        if(erroring==-1){
            Sleep(10000);
            system("exit");
        }
        else{
            Rpoint();
            direction();
            Sleep(115);
            system("cls");
            system("cls");
        }
    }

}
int direction(){
    locate();
    AI();
    int sec;
    int p=0,c,c_befor,a,s,w,d,put,atk;
    int i=0;
    put=0;
    sec=time_game/1;
    printf("Attention:\n\n\tDirection keys %s : %c(up)   %c(down)   %c(left) %c(right)\n",name_player1,order[5][0],order[6][0],order[7][0],order[5][0]);
    if(order[12][0]!='\0'){
        printf("\n\tYou have a rival\n");
    }
    if(attack!=0){
        printf("\n\tYou have a attack option\n");
    }
    if(raindb!=0){
        printf("\n\tRaindb is in the game\n");
    }
    if(time_game>1){
        printf("\n\tyour time : %d\n",sec);
    }
    printf("\n\tplease wait.....\n");
    Sleep(9000);
    if (time_game == 0){
        while(1){
            if(raindb!=0){
                Raindb();
            }
            if(kbhit()){
                c_befor=c;
                c=getch();
            }
            if(end==1||end==2||end==3){
                time_game=-1;
                break;
            }
            if(c==order[5][0]){
                w=1;
                a=s=d=0;
                move(w,s,a,d,put,atk);
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }
            if(c==order[13][0]){
                put=1;
                if(rep_put!=0){
                    move(w,s,a,d,put,atk);
                }
                c=c_befor;
                put=0;
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }
            if (c==order[6][0]){
                s=1;
                a=d=w=0;
                move(w,s,a,d,put,atk);
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }
            if(c==order[8][0]){
                d=1;
                a=w=s=0;
                move(w,s,a,d,put,atk);
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }
            if(c==order[7][0]){
                a=1;
                s=d=w=0;
                move(w,s,a,d,put,atk);
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }

            if(c==order[14][0]){
                time_game=-1;
                break;
            }
            if(raindb!=0)
            if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            p=p+0.2;
            show();
            Sleep(speed);
            system("cls");





        }
        Sleep(speed);
        system("cls");
        show();


    }
    else{
        while(time_game>=0){

            if(raindb!=0){
                Raindb();
            }

            if(kbhit()){
                c_befor=c;
                c=getch();
            }
            if(end==1||end==2||end==3){
                time_game=-1;
                break;
            }
            if(c==order[5][0]){
                w=1;
                a=s=d=0;
                move(w,s,a,d,put,atk);
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }
            if(c==order[13][0]){
                put=1;
                if(rep_put!=0){
                    move(w,s,a,d,put,atk);
                }
                c=c_befor;
                put=0;
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }
            if (c==order[6][0]){
                s=1;
                a=d=w=0;
                move(w,s,a,d,put,atk);
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }
            if(c==order[8][0]){
                d=1;
                a=w=s=0;
                move(w,s,a,d,put,atk);
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }
            if(c==order[7][0]){
                a=1;
                s=d=w=0;
                move(w,s,a,d,put,atk);
                if(raindb!=0)
                if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
                }
            }
            if(c==order[14][0]){
                locations[1][0]--;
                time_game=-2;

                break;
            }
            if(raindb!=0)
            if(map[locations[0][0]][locations[1][0]-1] == order[1][0]){
                end=1;
            }
            time_game=time_game-0.2;
            show();
            Sleep(speed);
            system("cls");

        }

    }
        Sleep(speed);
        system("cls");
        show();


        return 0;


}
void results(){
    char chr;
    int i=0;
    int a;
    FILE *file_win_player;
    FILE *file_game_over;
    FILE *file_eqval;
    if((end==1||end==3)){
        file_game_over=fopen("gameover.txt","r");
        if(file_game_over!=NULL){
            while((chr=fgetc(file_game_over))!=EOF){
            putchar(chr);

        }
        for (a = 200; a <= 300; a = a + 20){
                Beep(a,a);
            }

        fclose(file_game_over);
        }
        else{
            printf("you Game over!");
        }
    }
    else{
        file_win_player=fopen("win_player.txt","r");
        if(end==2 ||score_ai<score_player1){
            if(file_win_player!=NULL){
                while((chr=fgetc(file_win_player))!=EOF){
                putchar(chr);
                }
            for (a = 700; a <= 800; a = a + 20){
                Beep(a,a-450);
            }

            }
            else{
                printf("\n###############################you win######################\n");
            }
        fclose(file_win_player);
        }
        if(score_ai==score_player1){
            file_eqval=fopen("eqval.txt","r");
            if(file_eqval!=NULL){
                while((chr=fgetc(file_eqval))!=EOF){
                putchar(chr);
                }
            }
            else{
                printf("\n###############################  eqval  ######################\n");
            }

            fclose(file_eqval);
        }
    }

}
int Raindb(){
    int i,j,repeat,k;
    srand(time(0));
    k=0;
    j=y_loc_raindb;
    if(x_loc_raindb==NULL){
        x_loc_raindb=(int * )malloc(raindb*sizeof(int));
    }
    if(y_loc_raindb==0){
        y_loc_raindb++;
        j=y_loc_raindb;
        repeat=0;
        k=0;
        while(repeat<raindb){
            i=rand()%x;
            if(map[i][j]==' '||map[i][j]==order[9][0]||map[i][j]==order[12][0]){
                map[i][j]=order[1][0];
                x_loc_raindb[k]=i;
                k++;
                repeat++;
            }
        }
    }
    else{
        k=0;
        y_loc_raindb++;
        if(y_loc_raindb==y){
            y_loc_raindb=0;
            while(k!=raindb){
                map[x_loc_raindb[k]][j]=' ';
                k++;
            }

        }
        else{
            k=0;
            while(k != raindb){
                map[x_loc_raindb[k]][j]=' ';
                k++;
            }
            j=y_loc_raindb;
            k=0;
            while(k!=raindb){
                map[x_loc_raindb[k]][j]=order[1][0];
                k++;
            }
        }
    }

    return 0;
}
int Rpoint(){
    int repeat=rpoint[1];
    int i,j;
    srand(time(0));
    while(repeat>0){
        i=rand()%x;
        j=rand()%y;
        if((i<x)&&(j<y)&&(map[i][j]==' ')){
            map[i][j]=order[3][0];
            repeat--;
        }

    }
    return 0;
}
void move(int w,int s,int a,int d,int put ,int atk){
    int k_attak;//for while attak
    if(w==1){
        if(attack!=0){
            k_attak=0;
            while(k_attak!=attack){
                if(map[locations[0][0]][locations[1][0]-k_attak]==order[1][0]||map[locations[0][0]][locations[1][0]-k_attak]==order[12][0]){
                    map[locations[0][0]][locations[1][0]-k_attak]=' ';

                }
                k_attak++;
            }
        }
        if( map[locations[0][0]][locations[1][0]-1]==order[0][0] || map[locations[0][0]][locations[1][0]-1]==order[4][0])
            w=0;
        if(map[locations[0][0]][locations[1][0]-1]==' '){
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]][locations[1][0]-1]=order[9][0];
            locations[1][0]--;
        }
        if(map[locations[0][0]][locations[1][0]-1]==order[3][0]){
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]][locations[1][0]-1]=order[9][0];
            locations[1][0]--;
            score_player1=score_player1+rpoint[0];

        }
        if(map[locations[0][0]][locations[1][0]-1]==order[1][0]){
            w=0;
            end=1;
        }
        if(map[locations[0][0]][locations[1][0]-1]==order[10][0]){
            w=0;
            if(order[11][0]=='\0'){
               end=2;
               score_player1++;
            }


        }
        if(map[locations[0][0]][locations[1][0]-1]==order[2][0]){
            if( map[locations[0][0]][locations[1][0]-2]==order[0][0] || map[locations[0][0]][locations[1][0]-2]==order[4][0]|| map[locations[0][0]][locations[1][0]-2]==order[2][0]|| map[locations[0][0]][locations[1][0]-1]==order[1][0]|| map[locations[0][0]][locations[1][0]-1]==order[12][0]){
                w=0;
            }

            else{
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]][locations[1][0]-1]=order[9][0];
            map[locations[0][0]][locations[1][0]-2]=order[2][0];
            locations[1][0]--;

            }
        }
        if(map[locations[0][0]][locations[1][0]-1]==order[11][0]){
            if( map[locations[0][0]][locations[1][0]-2]==order[0][0] ||map[locations[0][0]][locations[1][0]-2]==order[12][0]||map[locations[0][0]][locations[1][0]-2]==order[4][0]|| map[locations[0][0]][locations[1][0]-2]==order[2][0]|| map[locations[0][0]][locations[1][0]-+2]==order[11][0]|| map[locations[0][0]][locations[1][0]-2]==order[1][0]){
                w=0;
            }

            else{
            if(map[locations[0][0]][locations[1][0]-2]==order[10][0]){
                end=2;
            }
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]][locations[1][0]-1]=order[9][0];
            map[locations[0][0]][locations[1][0]-2]=order[11][0];
            locations[1][0]--;
            locations[3][0]--;
            }
        }

    }
    //////////////////////////////////////////////////////////
    if(s==1){
        if(attack!=0){
            k_attak=0;
            while(k_attak!=attack){
                if(map[locations[0][0]][locations[1][0]+k_attak]==order[1][0]||map[locations[0][0]][locations[1][0]+k_attak]==order[12][0]){
                    map[locations[0][0]][locations[1][0]+k_attak]=' ';

                }
                k_attak++;
            }
        }
        if( map[locations[0][0]][locations[1][0]+1]==order[0][0] || map[locations[0][0]][locations[1][0]+1]==order[4][0])
            s=0;
        if(map[locations[0][0]][locations[1][0]+1]==' '){
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]][locations[1][0]+1]=order[9][0];
            locations[1][0]++;
        }
        if(map[locations[0][0]][locations[1][0]+1]==order[3][0]){
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]][locations[1][0]+1]=order[9][0];
            locations[1][0]++;
            score_player1=score_player1+rpoint[0];

        }
        if(map[locations[0][0]][locations[1][0]+1]==order[1][0]){
            s=0;
            end=1;
        }
        if(map[locations[0][0]][locations[1][0]+1]==order[10][0]){
            s=0;
            if(order[11][0]=='\0'){
               end=2;
               score_player1++;
            }
        }
        if(map[locations[0][0]][locations[1][0]+1]==order[2][0]){
            if( map[locations[0][0]][locations[1][0]+2]==order[0][0] || map[locations[0][0]][locations[1][0]+2]==order[4][0]|| map[locations[0][0]][locations[1][0]+2]==order[2][0]|| map[locations[0][0]][locations[1][0]+1]==order[1][0]|| map[locations[0][0]][locations[1][0]+1]==order[12][0]){
                s=0;
            }

            else{
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]][locations[1][0]+1]=order[9][0];
            map[locations[0][0]][locations[1][0]+2]=order[2][0];
            locations[1][0]++;

            }
        }
        if(map[locations[0][0]][locations[1][0]+1]==order[11][0]){
            if( map[locations[0][0]][locations[1][0]+2]==order[0][0] || map[locations[0][0]][locations[1][0]+2]==order[12][0]|| map[locations[0][0]][locations[1][0]+2]==order[4][0]|| map[locations[0][0]][locations[1][0]+2]==order[2][0]|| map[locations[0][0]][locations[1][0]+2]==order[11][0]|| map[locations[0][0]][locations[1][0]+2]==order[1][0]){
                s=0;
            }

            else{
             if(map[locations[0][0]][locations[1][0]+2]==order[10][0]){
                end=2;
                }
                map[locations[0][0]][locations[1][0]]=' ';
                if(put==1){
                map[locations[0][0]][locations[1][0]]=order[13][1];
                rep_put--;
                }
                map[locations[0][0]][locations[1][0]+1]=order[9][0];
                map[locations[0][0]][locations[1][0]+2]=order[11][0];
                locations[1][0]++;
                locations[3][0]++;
            }
        }

    }
    ////////////////////////////////////////////////////////////////////
    if(a==1){
        if(attack!=0){
            k_attak=0;
            while(k_attak!=attack){
                if(locations[0][0]-k_attak>0&& map[locations[0][0]-k_attak][locations[1][0]]==order[1][0]||locations[0][0]-k_attak>0&& map[locations[0][0]-k_attak][locations[1][0]]==order[12][0]){
                    map[locations[0][0]-k_attak][locations[1][0]]=' ';

                }
                k_attak++;
            }
        }
        if( map[locations[0][0]-1][locations[1][0]]==order[0][0] || map[locations[0][0]-1][locations[1][0]]==order[4][0]|| map[locations[0][0]-1][locations[1][0]]==order[4][0])
            a=0;
        if(map[locations[0][0]-1][locations[1][0]]==' '){
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]-1][locations[1][0]]=order[9][0];
            locations[0][0]--;
        }
        if(map[locations[0][0]-1][locations[1][0]]==order[3][0]){
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]-1][locations[1][0]]=order[9][0];
            locations[0][0]--;
            score_player1=score_player1+rpoint[0];

        }
        if(map[locations[0][0]-1][locations[1][0]]==order[2][0]){
            if( map[locations[0][0]-2][locations[1][0]]==order[0][0] || map[locations[0][0]-2][locations[1][0]]==order[4][0]|| map[locations[0][0]-2][locations[1][0]]==order[2][0]|| map[locations[0][0]-2][locations[1][0]]==order[11][0]|| map[locations[0][0]-2][locations[1][0]]==order[1][0]|| map[locations[0][0]-2][locations[1][0]]==order[12][0]){
                a=0;
            }
            else{
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]-1][locations[1][0]]=order[9][0];
            map[locations[0][0]-2][locations[1][0]]=order[2][0];
            locations[0][0]--;

            }
        }
        if(map[locations[0][0]-1][locations[1][0]]==order[11][0]){
            if( map[locations[0][0]-2][locations[1][0]]==order[0][0] || map[locations[0][0]-2][locations[1][0]]==order[12][0]|| map[locations[0][0]-2][locations[1][0]]==order[4][0]|| map[locations[0][0]-2][locations[1][0]]==order[2][0]|| map[locations[0][0]-2][locations[1][0]]==order[11][0]|| map[locations[0][0]-2][locations[1][0]]==order[1][0]){
                a=0;
            }

            else{
                if(map[locations[0][0]-2][locations[1][0]]==order[10][0]){
                    end=2;
                }
                map[locations[0][0]][locations[1][0]]=' ';
                if(put==1){
                map[locations[0][0]][locations[1][0]]=order[13][1];
                rep_put--;
                }
                map[locations[0][0]-1][locations[1][0]]=order[9][0];
                map[locations[0][0]-2][locations[1][0]]=order[11][0];
                locations[0][0]--;
                locations[2][0]--;
            }
        }
        if(map[locations[0][0]-1][locations[1][0]]==order[1][0]){
            a=0;
            end=1;
        }
        if(map[locations[0][0]-1][locations[1][0]]==order[10][0]){
            a=0;
            if(order[11][0]=='\0'){
               end=2;
               score_player1++;
            }
        }

    }
    ////////////////////////////////////////////////////////////////////////////
    if(d==1){
        if(attack!=0){
            k_attak=0;
            while(k_attak!=attack){
                if(locations[0][0]+k_attak<x&& map[locations[0][0]+k_attak][locations[1][0]]==order[1][0]||locations[0][0]+k_attak<x&&map[locations[0][0]+k_attak][locations[1][0]]==order[1][0]){
                    map[locations[0][0]+k_attak][locations[1][0]]=' ';

                }
                k_attak++;
            }
        }
        if( map[locations[0][0]+1][locations[1][0]]==order[0][0] || map[locations[0][0]+1][locations[1][0]]==order[4][0])
            d=0;
        if(map[locations[0][0]+1][locations[1][0]]==' '){
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]+1][locations[1][0]]=order[9][0];
            locations[0][0]++;
        }
        if(map[locations[0][0]+1][locations[1][0]]==order[3][0]){
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]+1][locations[1][0]]=order[9][0];
            locations[0][0]++;
            score_player1=score_player1+rpoint[0];

        }
        if(map[locations[0][0]+1][locations[1][0]]==order[1][0]){
            d=0;
            end=1;
        }
        if(map[locations[0][0]+1][locations[1][0]]==order[10][0]){
            d=0;
            if(order[11][0]=='\0'){
               end=2;
               score_player1++;
            }
        }
        if(map[locations[0][0]+1][locations[1][0]]==order[2][0]){
            if( map[locations[0][0]+2][locations[1][0]]==order[0][0] || map[locations[0][0]+2][locations[1][0]]==order[12][0]|| map[locations[0][0]+2][locations[1][0]]==order[4][0]|| map[locations[0][0]+2][locations[1][0]]==order[2][0]|| map[locations[0][0]+2][locations[1][0]]==order[11][0]|| map[locations[0][0]+2][locations[1][0]]==order[1][0]){
                d=0;
            }
            else{
            map[locations[0][0]][locations[1][0]]=' ';
            if(put==1){
            map[locations[0][0]][locations[1][0]]=order[13][1];
            rep_put--;
            }
            map[locations[0][0]+1][locations[1][0]]=order[9][0];
            map[locations[0][0]+2][locations[1][0]]=order[2][0];
            locations[0][0]++;

            }
        }
        if(map[locations[0][0]+1][locations[1][0]]==order[11][0]){
            if( map[locations[0][0]+2][locations[1][0]]==order[0][0]|| map[locations[0][0]+2][locations[1][0]]==order[12][0] || map[locations[0][0]+2][locations[1][0]]==order[4][0]|| map[locations[0][0]+2][locations[1][0]]==order[2][0]|| map[locations[0][0]+2][locations[1][0]]==order[11][0]|| map[locations[0][0]+2][locations[1][0]]==order[1][0]){
                d=0;
            }

            else{
                if(map[locations[0][0]+2][locations[1][0]]==order[10][0]){
                end=2;
                }
                map[locations[0][0]][locations[1][0]]=' ';
                if(put==1){
                map[locations[0][0]][locations[1][0]]=order[13][1];
                rep_put--;
                }
                map[locations[0][0]+1][locations[1][0]]=order[9][0];
                map[locations[0][0]+2][locations[1][0]]=order[11][0];
                locations[0][0]++;
                locations[2][0]++;
            }
        }

    }
    //////////////////////////////////////////////////////////////////

}
int locate(){
    /* In the map, it is played and positioned character, target ,object,opp*/
    int i,j,counter_opp,counter_target,counter_points;
    int opp,target,points;
    i=j=counter_opp=counter_target=opp = target = points = counter_points=0;
    opp=target=points=0;
    for(j=0;j<y;j++){
        for(i=0;i<x;i++){
            if(map[i][j] == order[12][0])
                counter_opp++;
            if(map[i][j] == order[10][0])
                counter_target++;
            if(map[i][j] == order[3][0])
                counter_points++;
        }
    }


    if(locations==NULL){
        locations = (int ** )malloc(10*sizeof(int *));
    locations[0]=(int *)malloc(sizeof(int));
    locations[1]=(int *)malloc(sizeof(int));
    locations[2]=(int *)malloc(sizeof(int));
    locations[3]=(int *)malloc(sizeof(int));
    locations[4]=(int *)malloc(counter_target+1*sizeof(int));
    locations[5]=(int *)malloc(counter_target+1*sizeof(int));
    locations[6]=(int *)malloc(counter_opp+1*sizeof(int));
    locations[7]=(int *)malloc(counter_opp+1*sizeof(int));
    locations[8]=(int *)malloc(counter_points+1*sizeof(int));
    locations[9]=(int *)malloc(counter_points+1*sizeof(int));
    }

    for(j=0;j<y;j++){
        for(i=0;i<x;i++){
            if(map[i][j] == order[10][0]){
                locations[4][target] = i;
                locations[5][target] = j;
                target++;
            }
            if(map[i][j] == order[12][0]){
                locations[6][opp] = i;
                locations[7][opp] = j;
                opp++;
            }

            if(map[i][j] == order[9][0]){
                locations[0][0] = i;
                locations[1][0] = j;

            }
            if(map[i][j] == order[11][0]){
                locations[2][0] = i;
                locations[3][0] = j;

            }


        }


    }

    return 0;
}
int show(){
    AI();
    int i,j,sec,dsec;
    j=0;
    i=0;
    sec=time_game/1;
    char buf[1000000];
    setvbuf(stdout, buf, _IOFBF, sizeof(buf));

    if(time_game>=0){


    while(j<=y){
        i=0;

        while(i<x){
            printf("%c",map[i][j]);
            i++;
        }
        printf("\n");
        j++;
    }
    if(time_game>0)
    printf("remaining time: %d \n",sec);

    if(order[12][0]!='\0'){
        printf("%s :%d\n",ai_name,score_ai);
    }
    if(order[3][0]!='\0'){
        printf("%s :%d\n",name_player1,score_player1);
    }
    }
    else{
        results();
    }
    return 0;
    }
int errors(){
    //If there is similarity in the variables or the insertion of the variable does not print...
    char **text_error;
    int i=0;
    text_error = (char**)malloc(15*sizeof(char*));
    text_error[0]="solidblock";text_error[1]="deathblock";text_error[2]="moveblock";text_error[3]="rpoint";
    text_error[4]="wall";text_error[5]="up";text_error[6]="down";text_error[7]="left";text_error[8]="right";
    text_error[9]="character";text_error[10]="target";text_error[11]="object";text_error[12]="opp";
    text_error[13]="put";text_error[14]="Exit";
    system("cls");
    for(i=0;i<=14;i++){
        if(Error[0][i] == 1){
            printf("\nError found in %s value name.\n",text_error[i]);
            erroring==-1;

        }
    }

    for(i=0;i<=14;i++){
        if(Error[0][i] == 2 ){
            printf("\nvalue name of %s used before.\n",text_error[i]);
            erroring==-1;
        }
    }
    for(i=0;i<=14;i++){
        if(Error[0][i] == 1){
            return -1;

        }
    }
    for(i=0;i<=14;i++){
        if(Error[0][i] == 2){
            return -1;

        }
    }

    return 0;


    }
void read_order(char*file_name_order){
    char chr;
    char line[20];
    int i=0;
    int j=0;
    int num=0;
    for(i=0;i!=14;i++){
        order[i][0]='\0';
    }
    for(i=0;i!=20;i++){
        for(j=0;j<15;j++){
            Error[i][j]=0;
        }
    }
    order[12][0]='\0';
    order[3][0]='\0';
    order[11][0]='\0';
    i=0;
    FILE *fil;
    fil=fopen(file_name_order,"r");
    while((chr=fgetc(fil))!=EOF){
           if(chr=='\n'){

                line[i]='\0';
                i=0;
            if(strstr(line,"solidblock")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][0]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][0] != 1)
                            Error[0][0]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[0][0]=line[i];
                    i=0;
            }
            if(strstr(line,"deathblock")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][1]=1;
                    }
                    for(j=0;j<=14;j++){
                    if(line[i]==order[j][0] && Error[0][1] != 1)
                            Error[0][1]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[1][0]=line[i];
                    i=0;
            }
            if(strstr(line,"moveblock")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    ////bary rad kardan soase ezafe
                    if(line[i]=='\0'){
                        Error[0][2]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][2] != 1)
                            Error[0][2]=2;
                    }
                    order[2][0]=line[i];
                    i=0;
            }
            if(strstr(line,"rpoint")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][3]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][3] != 1)
                            Error[0][3]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[3][0]=line[i];
                     while(line[i]!=',')
                        i++;
                    i++;
                    while(line[i]==' ')
                        i++;
                    ////bary rad kardan soase ezafe
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    rpoint[0]=num;
                    num=0;
                    while(line[i]!=',')
                        i++;
                    i++;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }

                    rpoint[1]=num;
                    i=0;
            }


             if(strstr(line,"wall")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][4]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][4] != 1)
                            Error[0][4]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[4][0]=line[i];
                    i=0;
            }
            if(strstr(line,"up")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][5]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][5] != 1)
                            Error[0][5]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[5][0]=line[i];
                    i=0;
            }
            if(strstr(line,"down")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][6]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][6] != 1)
                            Error[0][6]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[6][0]=line[i];
                    i=0;
            }
            if(strstr(line,"left")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][7]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][7] != 1)
                            Error[0][7]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[7][0]=line[i];
                    i=0;
            }
            if(strstr(line,"right")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][8]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][8] != 1)
                            Error[0][8]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[8][0]=line[i];
                    i=0;
            }
            if(strstr(line,"character")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][9]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][9] != 1)
                            Error[0][9]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[9][0]=line[i];
                    i=0;
            }
            if(strstr(line,"time")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;


                    ////bary rad kardan soase ezafe
                    num=0;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    time_game=num;
                    i=0;
            }

            if(strstr(line,"target")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][10]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][10] != 1)
                            Error[0][10]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[10][0]=line[i];
                    i=0;
            }
            if(strstr(line,"object")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][11]=1;
                    }

                    ////bary rad kardan soase ezafe
                    order[11][0]=line[i];
                    i=0;
            }
            if(strstr(line,"opp")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][12]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][12] != 1)
                            Error[0][12]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[12][0]=line[i];
                    while(line[i]!=',')
                        i++;
                    i++;
                    order[12][1]=line[i];
                    i=0;
            }

            if(strstr(line,"attack")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;

                    ////bary rad kardan soase ezafe
                    num=0;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    attack=num;
                    i=0;
            }
            if(strstr(line,"put")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][13]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][13] != 1)
                            Error[0][13]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[13][0]=line[i];
                     while(line[i]!=',')
                        i++;
                    i++;

                    while(line[i]==' ')
                        i++;
                    ////bary rad kardan soase ezafe
                    order[13][1]=line[i];
                    while(line[i]!=',')
                        i++;
                    i++;
                    num=0;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    rep_put=num;
                    i=0;
            }
            if(strstr(line,"raindb")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;

                    ////bary rad kardan soase ezafe
                    num=0;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    raindb=num;
                    i=0;
            }
            if(strstr(line,"Exit")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][14]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0] && Error[0][14] != 1)
                            Error[0][14]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[14][0]=line[i];
                    i=0;
            }
            }

           else{
            line[i]=chr;
            i++;
           }
    }
    line[i]='\0';
            i=0;
            if(strstr(line,"solidblock")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][0]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][0]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[0][0]=line[i];
                    i=0;
            }
            if(strstr(line,"deathblock")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][1]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][1]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[1][0]=line[i];
                    i=0;
            }
            if(strstr(line,"moveblock")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    ////bary rad kardan soase ezafe
                    if(line[i]=='\0'){
                        Error[0][2]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][2]=2;
                    }
                    order[2][0]=line[i];
                    i=0;
            }
            if(strstr(line,"rpoint")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][3]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][3]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[3][0]=line[i];
                     while(line[i]!=',')
                        i++;
                    i++;
                    while(line[i]==' ')
                        i++;
                    ////bary rad kardan soase ezafe
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    rpoint[0]=num;
                    num=0;
                    while(line[i]!=',')
                        i++;
                    i++;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }

                    rpoint[1]=num;
                    i=0;
            }


             if(strstr(line,"wall")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][4]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][4]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[4][0]=line[i];
                    i=0;
            }
            if(strstr(line,"up")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][5]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][5]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[5][0]=line[i];
                    i=0;
            }
            if(strstr(line,"down")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][6]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][6]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[6][0]=line[i];
                    i=0;
            }
            if(strstr(line,"left")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][7]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][7]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[7][0]=line[i];
                    i=0;
            }
            if(strstr(line,"right")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][8]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][8]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[8][0]=line[i];
                    i=0;
            }
            if(strstr(line,"character")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][9]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][9]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[9][0]=line[i];
                    i=0;
            }
            if(strstr(line,"time")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;


                    ////bary rad kardan soase ezafe
                    num=0;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    time_game=num;
                    i=0;
            }

            if(strstr(line,"target")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][10]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][10]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[10][0]=line[i];
                    i=0;
            }
            if(strstr(line,"object")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][11]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][11]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[11][0]=line[i];
                    i=0;
            }
            if(strstr(line,"opp")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][12]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][12]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[12][0]=line[i];
                    while(line[i]!=',')
                        i++;
                    i++;
                    order[12][1]=line[i];
                    i=0;
            }

            if(strstr(line,"attack")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;

                    ////bary rad kardan soase ezafe
                    num=0;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    attack=num;
                    i=0;
            }
            if(strstr(line,"put")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][13]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][13]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[13][0]=line[i];
                     while(line[i]!=',')
                        i++;
                    i++;

                    while(line[i]==' ')
                        i++;
                    ////bary rad kardan soase ezafe
                    order[13][1]=line[i];
                    while(line[i]!=',')
                        i++;
                    i++;
                    num=0;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    rep_put=num;
                    i=0;
            }
            if(strstr(line,"raindb")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;

                    ////bary rad kardan soase ezafe
                    num=0;
                    while(line[i]>='0'&&line[i]<='9'){
                        num=num*10 + line[i]-'0';
                        i++;
                    }
                    raindb=num;
                    i=0;
            }
            if(strstr(line,"Exit")!=NULL){
                    while(line[i]!='='){
                        i++;
                    }
                    i++;
                    while(line[i]==' ')
                        i++;
                    if(line[i]=='\0'){
                        Error[0][14]=1;
                    }
                    for(j=0;j<=14;j++){
                        if(line[i]==order[j][0])
                            Error[0][14]=2;
                    }
                    ////bary rad kardan soase ezafe
                    order[14][0]=line[i];
                    i=0;
            }
}
char** read_map(char ** map,char * file_name){
    char chr;
    int i,j,k;
    char line_hleper[100];
    int line;
    line=i=j=k=0;
    x=y=0;
    FILE *fil;
    fil=fopen(file_name,"r");
    while((chr=fgetc(fil))!=EOF){
           if(chr=='\n'){
            line++;
           }
           if(line==1){
            break;
           }
           else{
            if(chr>='0' && chr<='9'|| chr=='x'){
                line_hleper[i]=chr;
                i++;
            }
           }
    }
    line_hleper[i]='\0';
    i=0;
    while(line_hleper[i]!='x'){
        x=x*10+line_hleper[i]-'0';
        i++;
    }
    i++;
    while(line_hleper[i]!='\0'){
        y=y*10+line_hleper[i]-'0';
        i++;
    }

    map=(char ** )malloc(x*sizeof(char*));
    for (i=0;i!=x+1;i++){
        map[i]=(char*)malloc(y*sizeof(char));
    }
    i=j=0;
    while((chr=fgetc(fil))!=EOF){
           if(chr=='\n'){
            line++;
           }
           if(line==1){
            while((chr=fgetc(fil))!=EOF){
                if(chr=='\n'){
                    map[i][j]=map[i-1][j];
                    j++;
                    i=0;

                }
                else{
                    map[i][j]=chr;
                    i++;
                }

            }

           }
           else{

           }
    }

    i=0;
    fclose(fil);
    return map;
}
int AI(){

    int i,j,m,n;
    int location_target,location_opp,distance,counter;
    location_opp=location_target=counter=0;
    for(j=0;j<y;j++){
        for(i=0;i<x;i++){
            if(map[i][j] == order[12][0])
                counter++;

        }
    }
    if(AI_assist == NULL){
        AI_assist=(int*)malloc(counter*sizeof(int));
        for(i=0;i<counter;i++){
            AI_assist[i]=0;
        }
    }

    distance=x+y;

    while(counter > 0){
        for(j=0;j<y;j++){
            for(i=0;i<x;i++){
                if(map[i][j] == order[12][1]){
                    if(distance >= (abs(locations[6][counter-1]-i)+abs((locations[7][counter-1]-j)))){
                        distance = (abs(locations[6][counter-1]-i)+abs((locations[7][counter-1]-j)));
                        m=i;
                        n=j;
                    }
                }
            }

        }

        if(AI_assist[counter-1] < 13 && AI_assist[counter-1] > 0){
            if(AI_assist[counter-1] == 1){
                if(map[locations[6][counter-1]][locations[7][counter-1]+1] == order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]+1] == order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]+1] == order[4][0]){
                    AI_assist[counter-1]= 2;
                    return 0;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == ' '){

                    AI_assist[counter-1] = 13;
                }

                else{
                    map[locations[6][counter-1]][locations[7][counter-1]+1] = order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]++;
                    AI_assist[counter-1] = 1;

                }
            }
            if(AI_assist[counter-1] == 2){
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]-1] == order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]-1] == order[4][0]){
                    AI_assist[counter-1]= 1;
                    return 0;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == ' '){

                    AI_assist[counter-1] = 13;
                }

                else{
                    map[locations[6][counter-1]][locations[7][counter-1]-1]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]--;
                    AI_assist[counter-1] = 2;

                }
            }
            if(AI_assist[counter-1] == 3){
                if(map[locations[6][counter-1]][locations[7][counter-1]+1] == order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]+1] == order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]+1] == order[4][0]){
                    AI_assist[counter-1]= 4;
                    return 0;
                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]] == ' '){

                    AI_assist[counter-1] = 13;
                }
                else{
                    map[locations[6][counter-1]][locations[7][counter-1]+1]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]++;
                    AI_assist[counter-1] = 3;

                }
            }
            if(AI_assist[counter-1] == 4){
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]-1] == order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]-1] == order[4][0]){
                    AI_assist[counter-1]= 3;
                    return 0;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == ' '){

                    AI_assist[counter-1] = 13;
                }
                else{
                    map[locations[6][counter-1]][locations[7][counter-1]-1]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]--;
                    AI_assist[counter-1] = 4;

                }
            }
            if(AI_assist[counter-1] == 5){
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]+1][locations[7][counter-1]] == order[1][0] || map[locations[6][counter-1]+1][locations[7][counter-1]] == order[4][0]){
                    AI_assist[counter-1]= 6;
                    return 0;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == ' '){

                }
                else{
                    map[locations[6][counter-1]+1][locations[7][counter-1]]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]++;
                    AI_assist[counter-1] = 5;

                }
            }
            if(AI_assist[counter-1] == 6){
                    if(map[locations[6][counter-1]-1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]-1][locations[7][counter-1]] == order[1][0] || map[locations[6][counter-1]-1][locations[7][counter-1]] == order[4][0]){
                    AI_assist[counter-1]= 5;
                    return 0;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == ' '){

                    AI_assist[counter-1] = 13;
                }
                else{
                    map[locations[6][counter-1]-1][locations[7][counter-1]]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]--;
                    AI_assist[counter-1] = 6;

                }
            }
            if(AI_assist[counter-1] == 7){
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]+1][locations[7][counter-1]] == order[1][0] || map[locations[6][counter-1]+1][locations[7][counter-1]] == order[4][0]){
                    AI_assist[counter-1]= 8;
                    return 0;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1] == ' '){

                    AI_assist[counter-1] = 13;
                }
                else{
                    map[locations[6][counter-1]+1][locations[7][counter-1]]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]++;
                    AI_assist[counter-1] = 7;

                }
            }
            if(AI_assist[counter-1] == 8){
                if(map[locations[6][counter-1]-1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]-1][locations[7][counter-1]] == order[1][0] || map[locations[6][counter-1]-1][locations[7][counter-1]] == order[4][0]){
                    AI_assist[counter-1]= 7;
                    return 0;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1] == ' '){

                    AI_assist[counter-1] = 13;
                }
                else{
                    map[locations[6][counter-1]-1][locations[7][counter-1]]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]--;
                    AI_assist[counter-1] = 8;

                }
            }

        }

        else if(locations[6][counter-1] != m && AI_assist[counter-1] == 0){
            if(locations[6][counter-1] < m){

                if( map[locations[6][counter-1]+1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]+1][locations[7][counter-1]]==order[1][0] || map[locations[6][counter-1]+1][locations[7][counter-1]]==order[4][0]){
                    AI_assist[counter-1]=1;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]]==order[12][1]){
                    map[locations[6][counter-1]+1][locations[7][counter-1]] = order[12][1];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]++;
                    end=3;
                    time_game=-1;

                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]]==' '){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]+1][locations[7][counter-1]]=order[12][0];
                    locations[6][counter-1]++;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]]==order[3][0]){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]+1][locations[7][counter-1]]=order[12][0];
                    locations[6][counter-1]++;
                    score_ai=score_ai+rpoint[0];
                }


                if(map[locations[6][counter-1]+1][locations[7][counter-1]]==order[2][0]){
                    if( map[locations[6][counter-1]+2][locations[7][counter-1]]=order[0][0] || map[locations[6][counter-1]+2][locations[7][counter-1]]==order[4][0]|| map[locations[6][counter-1]+2][locations[7][counter-1]]==order[2][0]|| map[locations[6][counter-1]+2][locations[7][counter-1]]==order[11][0]){
                        AI_assist[counter-1]=1;
                    }
                    else{
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]+1][locations[7][counter-1]]=order[12][0];
                    map[locations[6][counter-1]+2][locations[7][counter-1]]=order[2][0];
                    locations[6][counter-1]++;

                    }
                }

            }
            if(locations[6][counter-1] > m){

                if( map[locations[6][counter-1]-1][locations[7][counter-1]]==order[0][0] || map[locations[6][counter-1]-1][locations[7][counter-1]]==order[1][0]|| map[locations[6][counter-1]-1][locations[7][counter-1]]==order[4][0]){
                    AI_assist[counter-1]=3;
                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]]==order[12][1]){
                    map[locations[6][counter-1]-1][locations[7][counter-1]] = order[12][1];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]--;
                    end=3;
                    time_game=-1;
                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]]==' '){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]-1][locations[7][counter-1]]=order[12][0];
                    locations[6][counter-1]--;
                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]]==order[3][0]){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';

                    map[locations[6][counter-1]-1][locations[7][counter-1]]=order[12][0];
                    locations[6][counter-1]--;
                    score_ai=score_ai+rpoint[0];

                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]]==order[2][0]){
                    if( map[locations[6][counter-1]-2][locations[7][counter-1]]==order[0][0] || map[locations[6][counter-1]-2][locations[7][counter-1]]==order[4][0]|| map[locations[6][counter-1]-2][locations[7][counter-1]]==order[2][0]|| map[locations[6][counter-1]-2][locations[7][counter-1]]==order[11][0]){
                        AI_assist[counter-1]=3;
                    }
                    else{
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]-1][locations[7][counter-1]]=order[12][0];
                    map[locations[6][counter-1]-2][locations[7][counter-1]]=order[2][0];
                    locations[6][counter-1]--;

                    }
                }


            }
        }
        else if(locations[7][counter-1] != n && AI_assist[counter-1] == 0){
            if(locations[7][counter-1] > n){

                if( map[locations[6][counter-1]][locations[7][counter-1]-1]==order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]-1]==order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]-1]==order[4][0]){
                    AI_assist[counter-1] = 5;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1]==order[12][1]){
                    map[locations[6][counter-1]][locations[7][counter-1]-1] = order[12][1];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]--;
                    end=3;
                    time_game=-1;

                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1]==' '){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]-1]=order[12][0];
                    locations[7][counter-1]--;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == order[3][0]){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]-1]=order[12][0];
                    locations[7][counter-1]--;
                    score_ai=score_ai+rpoint[0];

                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == order[2][0]){
                    if( map[locations[6][counter-1]][locations[7][counter-1]-2]==order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]-2]==order[4][0]|| map[locations[6][counter-1]][locations[7][counter-1]-2]==order[11][0]|| map[locations[6][counter-1]][locations[7][counter-1]-2]==order[2][0]){
                        AI_assist[counter-1] = 5;
                    }
                    else{
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]-1] = order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]-2] = order[2][0];
                    locations[7][counter-1]--;

                    }
                }



            }
            if(locations[7][counter-1] < n){
                if( map[locations[6][counter-1]][locations[7][counter-1]+1]==order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]+1]==order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]+1]==order[4][0]){
                   AI_assist[counter-1] = 7;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1]==order[12][1]){
                    map[locations[6][counter-1]][locations[7][counter-1]+1] = order[12][1];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]++;
                    end=3;
                    time_game=-1;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1]==' '){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]+1]=order[12][0];
                    locations[7][counter-1]++;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1]==order[3][0]){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]+1]=order[12][0];
                    locations[7][counter-1]++;
                    score_ai=score_ai+rpoint[0];

                }

                if(map[locations[6][counter-1]][locations[7][counter-1]+1]==order[2][0]){
                    if( map[locations[6][counter-1]][locations[7][counter-1]+2]==order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]+2]==order[4][0]|| map[locations[6][counter-1]][locations[7][counter-1]+2]==order[2][0]){
                        AI_assist[counter-1] = 7;
                    }
                    else{
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]+1]=order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]+2]=order[2][0];
                    locations[7][counter-1]++;
                    }
                }

            }


        }
        if(AI_assist[counter-1] < 26 && AI_assist[counter-1] > 13){
            if(AI_assist[counter-1] == 14){
                if(map[locations[6][counter-1]][locations[7][counter-1]+1] == order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]+1] == order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]+1] == order[4][0]){
                    AI_assist[counter-1]= 1;
                    return 0;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == ' '){

                    AI_assist[counter-1] = 0;
                }

                else{
                    map[locations[6][counter-1]][locations[7][counter-1]+1] = order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]++;
                    AI_assist[counter-1] = 14;

                }
            }
            if(AI_assist[counter-1] == 15){
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]-1] == order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]-1] == order[4][0]){
                    AI_assist[counter-1]= 14;
                    return 0;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == ' '){

                    AI_assist[counter-1] = 0;
                }

                else{
                    map[locations[6][counter-1]][locations[7][counter-1]-1]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]--;
                    AI_assist[counter-1] = 15;

                }
            }
            if(AI_assist[counter-1] == 16){
                if(map[locations[6][counter-1]][locations[7][counter-1]+1] == order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]+1] == order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]+1] == order[4][0]){
                    AI_assist[counter-1]= 17;
                    return 0;
                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]] == ' '){

                    AI_assist[counter-1] = 0;
                }
                else{
                    map[locations[6][counter-1]][locations[7][counter-1]+1]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]++;
                    AI_assist[counter-1] = 16;

                }
            }
            if(AI_assist[counter-1] == 17){
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]-1] == order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]-1] == order[4][0]){
                    AI_assist[counter-1]= 16;
                    return 0;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == ' '){

                    AI_assist[counter-1] = 0;
                }
                else{
                    map[locations[6][counter-1]][locations[7][counter-1]-1]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]--;
                    AI_assist[counter-1] = 17;

                }
            }
            if(AI_assist[counter-1] == 18){
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]+1][locations[7][counter-1]] == order[1][0] || map[locations[6][counter-1]+1][locations[7][counter-1]] == order[4][0]){
                    AI_assist[counter-1]= 19;
                    return 0;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == ' '){

                    AI_assist[counter-1] = 0;
                }
                else{
                    map[locations[6][counter-1]+1][locations[7][counter-1]]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]++;
                    AI_assist[counter-1] = 18;

                }
            }
            if(AI_assist[counter-1] == 19){
                    if(map[locations[6][counter-1]-1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]-1][locations[7][counter-1]] == order[1][0] || map[locations[6][counter-1]-1][locations[7][counter-1]] == order[4][0]){
                    AI_assist[counter-1]= 18;
                    return 0;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == ' '){

                    AI_assist[counter-1] = 0;
                }
                else{
                    map[locations[6][counter-1]-1][locations[7][counter-1]]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]--;
                    AI_assist[counter-1] = 19;

                }
            }
            if(AI_assist[counter-1] == 20){
                if(map[locations[6][counter-1]+1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]+1][locations[7][counter-1]] == order[1][0] || map[locations[6][counter-1]+1][locations[7][counter-1]] == order[4][0]){
                    AI_assist[counter-1]= 21;
                    return 0;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1] == ' '){

                    AI_assist[counter-1] = 0;
                }
                else{
                    map[locations[6][counter-1]+1][locations[7][counter-1]]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]++;
                    AI_assist[counter-1] = 20;

                }
            }
            if(AI_assist[counter-1] == 21){
                if(map[locations[6][counter-1]-1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]-1][locations[7][counter-1]] == order[1][0] || map[locations[6][counter-1]-1][locations[7][counter-1]] == order[4][0]){
                    AI_assist[counter-1]= 20;
                    return 0;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1] == ' '){

                    AI_assist[counter-1] = 0;
                }
                else{
                    map[locations[6][counter-1]-1][locations[7][counter-1]]= order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]--;
                    AI_assist[counter-1] = 21;

                }
            }

        }
        else if(locations[7][counter-1] != n && AI_assist[counter-1] == 13){
            if(locations[7][counter-1] > n){

                if( map[locations[6][counter-1]][locations[7][counter-1]-1]==order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]-1]==order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]-1]==order[4][0]){
                    AI_assist[counter-1] = 19;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1]==order[12][1]){
                    map[locations[6][counter-1]][locations[7][counter-1]-1] = order[12][1];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]--;
                    end=3;
                    time_game=-1;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1]==' '){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]-1]=order[12][0];
                    locations[7][counter-1]--;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == order[3][0]){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]-1]=order[12][0];
                    locations[7][counter-1]--;
                    score_ai=score_ai+rpoint[0];

                }
                if(map[locations[6][counter-1]][locations[7][counter-1]-1] == order[2][0]){
                    if( map[locations[6][counter-1]][locations[7][counter-1]-2]==order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]-2]==order[4][0]|| map[locations[6][counter-1]][locations[7][counter-1]-2]==order[11][0]|| map[locations[6][counter-1]][locations[7][counter-1]-2]==order[2][0]){
                        AI_assist[counter-1] = 19;
                    }
                    else{
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]-1] = order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]-2] = order[2][0];
                    locations[7][counter-1]--;

                    }
                }



            }
            if(locations[7][counter-1] < n){
                if( map[locations[6][counter-1]][locations[7][counter-1]+1]==order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]+1]==order[1][0] || map[locations[6][counter-1]][locations[7][counter-1]+1]==order[4][0]){
                   AI_assist[counter-1] = 21;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1]==order[12][1]){
                    map[locations[6][counter-1]][locations[7][counter-1]+1] = order[12][1];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[7][counter-1]++;
                    end=3;
                    time_game=-1;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1]==' '){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]+1]=order[12][0];
                    locations[7][counter-1]++;
                }
                if(map[locations[6][counter-1]][locations[7][counter-1]+1]==order[3][0]){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]+1]=order[12][0];
                    locations[7][counter-1]++;
                    score_ai=score_ai+rpoint[0];

                }

                if(map[locations[6][counter-1]][locations[7][counter-1]+1]==order[2][0]){
                    if( map[locations[6][counter-1]][locations[7][counter-1]+2]==order[0][0] || map[locations[6][counter-1]][locations[7][counter-1]+2]==order[4][0]|| map[locations[6][counter-1]][locations[7][counter-1]+2]==order[2][0]){
                        AI_assist[counter-1] = 21;
                    }
                    else{
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]][locations[7][counter-1]+1]=order[12][0];
                    map[locations[6][counter-1]][locations[7][counter-1]+2]=order[2][0];
                    locations[7][counter-1]++;
                    }
                }

            }


        }
        else if(locations[6][counter-1] != m && AI_assist[counter-1] == 13){
            if(locations[6][counter-1] < m){

                if( map[locations[6][counter-1]+1][locations[7][counter-1]] == order[0][0] || map[locations[6][counter-1]+1][locations[7][counter-1]]==order[1][0] || map[locations[6][counter-1]+1][locations[7][counter-1]]==order[4][0]){
                    AI_assist[counter-1]=15;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]]==order[12][1]){
                    map[locations[6][counter-1]+1][locations[7][counter-1]] = order[12][1];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]++;
                    end=3;
                    time_game=-1;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]]==' '){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]+1][locations[7][counter-1]]=order[12][0];
                    locations[6][counter-1]++;
                }
                if(map[locations[6][counter-1]+1][locations[7][counter-1]]==order[3][0]){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]+1][locations[7][counter-1]]=order[12][0];
                    locations[6][counter-1]++;
                    score_ai=score_ai+rpoint[0];
                }


                if(map[locations[6][counter-1]+1][locations[7][counter-1]]==order[2][0]){
                    if( map[locations[6][counter-1]+2][locations[7][counter-1]]=order[0][0] || map[locations[6][counter-1]+2][locations[7][counter-1]]==order[4][0]|| map[locations[6][counter-1]+2][locations[7][counter-1]]==order[2][0]|| map[locations[6][counter-1]+2][locations[7][counter-1]]==order[11][0]){
                        AI_assist[counter-1]=14;
                    }
                    else{
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]+1][locations[7][counter-1]]=order[12][0];
                    map[locations[6][counter-1]+2][locations[7][counter-1]]=order[2][0];
                    locations[6][counter-1]++;

                    }
                }

            }
            if(locations[6][counter-1] > m){

                if( map[locations[6][counter-1]-1][locations[7][counter-1]]==order[0][0] || map[locations[6][counter-1]-1][locations[7][counter-1]]==order[1][0]|| map[locations[6][counter-1]-1][locations[7][counter-1]]==order[4][0]){
                    AI_assist[counter-1]=16;
                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]]==order[12][1]){
                    map[locations[6][counter-1]-1][locations[7][counter-1]] = order[12][1];
                    map[locations[6][counter-1]][locations[7][counter-1]] = ' ';
                    locations[6][counter-1]--;
                    end=3;
                    time_game=-1;
                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]]==' '){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]-1][locations[7][counter-1]]=order[12][0];
                    locations[6][counter-1]--;
                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]]==order[3][0]){
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';

                    map[locations[6][counter-1]-1][locations[7][counter-1]]=order[12][0];
                    locations[6][counter-1]--;
                    score_ai=score_ai+rpoint[0];

                }
                if(map[locations[6][counter-1]-1][locations[7][counter-1]]==order[2][0]){
                    if( map[locations[6][counter-1]-2][locations[7][counter-1]]==order[0][0] || map[locations[6][counter-1]-2][locations[7][counter-1]]==order[4][0]|| map[locations[6][counter-1]-2][locations[7][counter-1]]==order[2][0]|| map[locations[6][counter-1]-2][locations[7][counter-1]]==order[11][0]){
                        AI_assist[counter-1]=16;
                    }
                    else{
                    map[locations[6][counter-1]][locations[7][counter-1]]=' ';
                    map[locations[6][counter-1]-1][locations[7][counter-1]]=order[12][0];
                    map[locations[6][counter-1]-2][locations[7][counter-1]]=order[2][0];
                    locations[6][counter-1]--;

                    }
                }


            }
        }

        counter--;

    }

}

