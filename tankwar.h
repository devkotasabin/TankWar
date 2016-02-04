
/////////////////////////////////////////////////////////////////////
// Game Programming All In One, Third Edition
// Tank War Enhancement 5 - tankwar.h
/////////////////////////////////////////////////////////////////////
#ifndef _TANKWAR_H
#define _TANKWAR_H
#include "allegro.h"
#include "../mappydemo/mappyal.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//define some game constants
#define MODE GFX_AUTODETECT
#define WIDTH 640
#define HEIGHT 480
#define MAXSPEED 4
#define BULLETSPEED 10
#define MAXBULLET 10
#define TILEW 32
#define TILEH 32
#define TILES 39
#define COLS 20
#define MAP_ACROSS 31
#define MAP_DOWN 33
#define MAPW MAP_ACROSS * TILEW
#define MAPH MAP_DOWN * TILEH
#define LOOPDELAY 6

#define SCROLLW 310
#define SCROLLH 375
//define some colors
#define TAN makecol(255,242,169)
#define BURST makecol(255,189,73)
#define BLACK makecol(0,0,0)
#define WHITE makecol(255,255,255)
#define GRAY makecol(128,128,128)
#define GREEN makecol(0,255,0)
//define the sprite structure
typedef struct SPRITE
{
//new elements
int dir, alive;
int x,y;
int width,height;
int xspeed,yspeed;
int xdelay,ydelay;
int xcount,ycount;
int curframe,maxframe,animdir;
int framecount,framedelay;
}SPRITE;
SPRITE mytanks[2];
SPRITE *tanks[2];
SPRITE mybullets[2][MAXBULLET];
SPRITE *bullets[2][MAXBULLET];
SPRITE *explosions[2];
//declare some variables
int gameover;
int scores[2];
int scrollx[2], scrolly[2];
int startx[2], starty[2];
int tilex, tiley, n;
int radarx, radary;
//sprite bitmaps
BITMAP *tank_bmp[2][8][8];
BITMAP *bullet_bmp[2];
BITMAP *explode_bmp;
//the game map
extern int loopcnt;
//double buffer
BITMAP *buffer;
//bitmap containing source tiles
//virtual background buffer

//screen background
BITMAP *back;
//function prototypes
void animatetank(int num);
void updateexplosion(int num);
void loadsprites();
void drawtank(int num);
void erasetank(int num);
void movetank(int num);
void explode(int num, int x, int y);
void movebullet(int num);
void drawbullet(int num);
void fireweapon(int num);
void forward(int num);
void backward(int num);
void turnleft(int num);
void turnright(int num);
void getinput();
void setuptanks();
void setupscreen();
int inside(int,int,int,int,int,int);
BITMAP *grabframe(BITMAP *, int, int, int, int, int, int);
#endif

