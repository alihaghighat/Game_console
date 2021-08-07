#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<float.h>
#include<time.h>
#include <dos.h>
#include <conio.h>
#include <dos.h>

extern char ** map;
extern int ** locations;
extern int x,y;//size of map
extern float time_game;
extern int * AI_assist ;
extern int y_loc_raindb;
extern char order[15][3];//for save order
extern int rpoint[2];
extern int rep_put;
extern int attack;
extern int raindb;
extern int Error[20][15];
extern int *x_loc_raindb;
extern int end;
extern int score_player1;
extern int score_ai;
extern char name_player1[50];
extern char ai_name[];
extern int erroring;
extern int mood_cmd1;
extern int speed;
//////////////////////////
char** read_map(char ** map,char * file_name);
void rally_x();
void Pacman();
void pull_Box();
void Maze();
void Fliaght();
int direction();
void results();
int Raindb();
int Rpoint();
void move(int w,int s,int a,int d,int put ,int atk);
int locate();
int show();
int errors();
void read_order(char*file_name_order);
int AI();
