////////////////////////////////////////////////////////////////////
// Game Programming All In One, Third Edition
// Tank War Enhancement 5 - main.c
////////////////////////////////////////////////////////////////////
#include "tankwar.h"
int loopcnt;
/*#define B 39
int map[MAPW*MAPH] = {
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 19, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 17, 29, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 39, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 17, 17, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 39, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 11, 3, 3, 30, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 19, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 28, 27, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 24, 3, 3, 3, 3, 3, 3, 3, 3, 3,
4, 6, 35, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 15,
14, 14, 14, 16, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
4, 6, 37, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 25, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 7, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 0, 17, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 17, 17, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 17, 17, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 17, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 10, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 14, 5, 3, 3, 3, 1, 1, 5, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 20, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 24, 25, 1, 1, 1, 1,
1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 23, 26, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
};
*/
//perform basic collision detection
int inside(int x,int y,int left,int top,int right,int bottom)
{
if (x > left && x < right && y > top && y < bottom)
return 1;
else
return 0;
}
//reuse our friendly tile grabber
BITMAP *grabframe(BITMAP *source,
int width, int height,
int startx, int starty,
int columns, int frame)
{
BITMAP *temp = create_bitmap(width,height);
int x = startx + (frame % columns) * width;
int y = starty + (frame / columns) * height;
blit(source,temp,x,y,0,0,width,height);
return temp;
}
//main function
int main(void)
{
    int anim;
//initialize the game
allegro_init();
install_keyboard();
install_timer();
srand(time(NULL));

setupscreen();
setuptanks();
loadsprites();
if(MapLoad("map3.fmp"))
    allegro_message("Can't find map3.fmp");
//game loop
while(!gameover)
{
    if(loopcnt<LOOPDELAY)loopcnt++;
//move the tanks and bullets
for (n=0; n<2; n++)
{
movetank(n);
animatetank(n);
movebullet(n);
}
//draw background bitmap
blit(back, buffer, 0, 0, 0, 0, back->w, back->h);
//draw scrolling windows
for (n=0; n<2; n++)
//blit(scroll, buffer, scrollx[n], scrolly[n],
//startx[n], starty[n], SCROLLW, SCROLLH);
//update the radar
MapDrawBG(buffer,scrollx[n],scrolly[n],startx[n],starty[n],SCROLLW,SCROLLH);
rectfill(buffer,radarx+1,radary+1,radarx+99,radary+88,BLACK);
rect(buffer,radarx,radary,radarx+100,radary+89,WHITE);
//draw mini tanks on radar
for (n=0; n<2; n++)
stretch_sprite(buffer, tank_bmp[n][tanks[n]->curframe][tanks[n]->dir],
radarx + scrollx[n]/10 + (SCROLLW/10)/2-4,
radary + scrolly[n]/12 + (SCROLLH/12)/2-4,
8, 8);
//draw player viewport on radar
for (n=0; n<2; n++)
rect(buffer,radarx+scrollx[n]/10, radary+scrolly[n]/12,
radarx+scrollx[n]/10+SCROLLW/10,
radary+scrolly[n]/12+SCROLLH/12, GRAY);
//display score
for (n=0; n<2; n++)
textprintf_ex(buffer, font, startx[n], HEIGHT-10,
BURST,-1, "Score: %d", scores[n]);
//draw the tanks and bullets
for (n=0; n<2; n++)
{
drawtank(n);
drawbullet(n);
}
for(n=0;n<2;n++){
    updateexplosion(n);
}
//refresh the screen
acquire_screen();
blit(buffer, screen, 0, 0, 0, 0, WIDTH, HEIGHT);
release_screen();
//check for keypresses
if (keypressed())
getinput();
//slow the game down
rest(20);
}
//destroy bitmaps
destroy_bitmap(explode_bmp);
destroy_bitmap(back);
//destroy_bitmap(scroll);
destroy_bitmap(buffer);
destroy_bitmap(bullet_bmp[0]);
destroy_bitmap(bullet_bmp[1]);


for(anim=0;anim<8;anim++)
for (n=0; n<8; n++)
{
destroy_bitmap(tank_bmp[0][anim][n]);
destroy_bitmap(tank_bmp[1][anim][n]);

}
for(n=0;n<2;n++)

free(explosions[n]);
MapFreeMem();
allegro_exit();

return 0;
}
END_OF_MAIN()
