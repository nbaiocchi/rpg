/*
** EPITECH PROJECT, 2020
** prototype.h
** File description:
** t
*/

#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*............... structure ...............*/

typedef struct s_window
{
    sfRenderWindow *window;
    sfEvent event;
    sfVector2i mouse;
} t_window;

typedef struct s_map
{
    sfTexture* t_map1;
    sfSprite* s_map1;
    sfIntRect rect_map1;
    sfVector2f pos_map1;

    sfTexture* t_map2;
    sfSprite* s_map2;
    sfIntRect rect_map2;
    sfVector2f pos_map2;

    sfTexture* t_map3;
    sfSprite* s_map3;
    sfIntRect rect_map3;
    sfVector2f pos_map3;

    sfTexture* t_map4;
    sfSprite* s_map4;
    sfIntRect rect_map4;
    sfVector2f pos_map4;

    sfTexture* t_bt1;
    sfSprite* s_bt1;
    sfIntRect rect_bt1;
    sfVector2f pos_bt1;

    sfTexture* t_bt2;
    sfSprite* s_bt2;
    sfIntRect rect_bt2;
    sfVector2f pos_bt2;

    sfVector2f size;
    sfVector2f size2;

    sfFloatRect rect_cam;
    sfView *camera;
    sfVector2f pos_cam;
} t_map;

typedef struct s_menu
{
    sfTexture* t_menu;
    sfSprite* s_menu;
    sfIntRect rect_menu;
    sfVector2f pos_menu;
    sfTexture* t_poulpi;
    sfSprite* s_poulpi;
    sfIntRect rect_poulpi;
    sfVector2f pos_poulpi;
    sfSprite* s_poulpi2;
    sfVector2f pos_poulpi2;

    sfTexture* t_select;
    sfSprite* s_select;
    sfIntRect rect_select;
    sfVector2f pos_select;

    sfSprite* s_select2;
    sfVector2f pos_select2;

    sfTexture* t_intro;
    sfSprite* s_intro;
    sfIntRect rect_intro;
    sfVector2f pos_intro;

    sfTexture* t_shop;
    sfSprite* s_shop;
    sfIntRect rect_shop;
    sfVector2f pos_shop;

    sfTexture* t_para;
    sfSprite* s_para;
    sfIntRect rect_para;
    sfVector2f pos_para;

    sfTexture* t_pause;
    sfSprite* s_pause;
    sfIntRect rect_pause;
    sfVector2f pos_pause;

    sfTexture* t_expl;
    sfSprite* s_expl;
    sfIntRect rect_expl;
    sfVector2f pos_expl;

    sfTexture* t_win;
    sfSprite* s_win;
    sfIntRect rect_win;
    sfVector2f pos_win;

    sfText *txt_gold;
    char *str_gold;
    sfVector2f pose_gold;

    sfText *txt_lvl;
    char *str_lvl;
    sfVector2f pose_lvl;

    sfText *txt_life;
    char *str_life;
    sfVector2f pose_life;

    sfFont *font;
} t_menu;

typedef struct s_statut
{
    int statut;
    int sex;
    int place;
    int life;
    int lvl;
    int win;
    int gold;
    int turn;
    int pv_max;
    int my_lvl;
    int lvl_max;
    int damage;
    int hit;
    int stat;
    int x;
    int y;
} t_statut;

typedef struct s_champ
{
    sfTexture* t_choice;
    sfSprite* s_choice;
    sfIntRect rect_choice;
    sfVector2f pos_choice;

    int fiddle;
    int wolf;
    int ghost;
    int witch;
    int fiddle_pv;
    int wolf_pv;
    int ghost_pv;
    int witch_pv;
} t_champ;

typedef struct s_dialogue
{
    sfTexture* t_dialogue;
    sfSprite* s_dialogue;
    sfIntRect rect_dialogue;
    sfVector2f pos_dialogue;
} t_dialogue;

typedef struct s_clock
{
    sfClock *clock1;
    sfClock *clock2;
    sfTime time;
    float second;
} t_clock;

typedef struct s_char
{
    sfTexture* t_char;
    sfSprite* s_char;
    sfIntRect rect_char;
    sfVector2f pos_char;

    sfClock *clock;
    sfTime time;
    float second;
    sfVector2f size;
} t_char;

typedef struct s_coli1
{
    char *map;
    int size;
    int x;
    int y;
    sfTexture* t_coli;
    sfSprite* s_coli;
    sfIntRect rect_coli;
    sfVector2f pos_coli;
} t_coli1;

typedef struct s_coli2
{
    char *map;
    int size;
    int x;
    int y;
    sfTexture* t_coli;
    sfSprite* s_coli;
    sfIntRect rect_coli;
    sfVector2f pos_coli;
} t_coli2;

typedef struct s_coli3
{
    char *map;
    int size;
    int x;
    int y;
    sfTexture* t_coli;
    sfSprite* s_coli;
    sfIntRect rect_coli;
    sfVector2f pos_coli;
} t_coli3;

typedef struct s_coli4
{
    char *map;
    int size;
    int x;
    int y;
    sfTexture* t_coli;
    sfSprite* s_coli;
    sfIntRect rect_coli;
    sfVector2f pos_coli;
} t_coli4;

typedef struct s_tool
{
    sfTexture* t_move;
    sfSprite* s_move;
    sfIntRect rect_move;
    sfVector2f pos_move;

    sfTexture* t_fight;
    sfSprite* s_fight;
    sfIntRect rect_fight;
    sfVector2f pos_fight;

    sfTexture* t_ball;
    sfSprite* s_ball;
    sfIntRect rect_ball;
    sfVector2f pos_ball;
    int ball;

    sfTexture* t_heal;
    sfSprite* s_heal;
    sfIntRect rect_heal;
    sfVector2f pos_heal;

    sfTexture* t_sound;
    sfSprite* s_sound;
    sfIntRect rect_sound;
    sfVector2f pos_sound;
    int sound;

    sfTexture* t_shadow;
    sfSprite* s_shadow;
    sfIntRect rect_shadow;
    sfVector2f pos_shadow;
    sfTexture* t_partic;
    sfSprite* s_partic;
    sfIntRect rect_partic;
    sfVector2f pos_partic;

    sfTexture* t_hit;
    sfSprite* s_hit;
    sfIntRect rect_hit;
    sfVector2f pos_hit;

    int door1;
    int door2;
    int door3;
    int door4;
    int door5;

    sfMusic *music;
    float volume;

    sfMusic *octo;
    float volume2;

    sfSound *clic;
    sfSoundBuffer *bclic;
} t_tool;

typedef struct s_emy
{
    sfTexture* t_emy;
    sfSprite* s_emy;
    sfIntRect rect_emy;
    sfVector2f pos_emy;
    int emy;
    sfClock *clock;
} t_emy;

typedef struct s_life
{
    sfTexture* t_life;
    sfSprite* s_life;
    sfIntRect rect_life;
    sfVector2f pos_life;
    sfTexture* t_lvl;
    sfSprite* s_lvl;
    sfIntRect rect_lvl;
    sfVector2f pos_lvl;
} t_life;

typedef struct s_boss
{
    sfTexture* t_boss;
    sfSprite* s_boss;
    sfIntRect rect_boss;
    sfVector2f pos_boss;

    sfTexture* t_batle;
    sfSprite* s_batle;
    sfIntRect rect_batle;
    sfVector2f pos_batle;

    int rect;
    int boss;
    int boss_pv;
    int end_game;
} t_boss;

typedef struct s_items
{
    sfTexture* t_item;
    sfSprite* s_item;
    sfIntRect rect_item;
    sfVector2f pos_item;

    sfTexture* t_anal;
    sfSprite* s_anal;
    sfIntRect rect_anal;
    sfVector2f pos_anal;

    int shop;

    int potion;
    int force;
    int helth;
    int anal;
    int g_anal;
    int w_anal;

    sfText *txt_potion;
    char *str_potion;
    sfVector2f pose_potion;
    sfText *txt_force;
    char *str_force;
    sfVector2f pose_force;
    sfText *txt_helth;
    char *str_helth;
    sfVector2f pose_helth;
} t_items;

typedef struct v_variable
{
    t_window *_window;
    t_menu *_menu;
    t_statut *_statut;
    t_champ *_champ;
    t_dialogue *_dialogue;
    t_clock *_clock;
    t_map *_map;
    t_char *_char;
    t_coli1 *_coli1;
    t_coli2 *_coli2;
    t_coli3 *_coli3;
    t_coli4 *_coli4;
    t_tool *_tool;
    t_emy *_emy;
    t_life *_life;
    t_boss *_boss;
    t_items *_items;
} v_var;

/*............... my_runner.c ...............*/

/*............... create ...............*/

void create_all(v_var *a);
void pose(v_var *a);
void rect(v_var *a);
void sprite(v_var *a);
void malloc_struct(v_var *a);
void free_all(v_var *a);
void destroy(v_var *a);
void variable(v_var *a);
void create_clock(v_var *a);
void rect2_1(v_var *a);
void sprite2(v_var *a);
void rect2(v_var *a);
void sprite3(v_var *a);
void explain_mousse(v_var *a);
void last_mousse(v_var *a);
void cdf_reset(v_var *a);
void up_lvl(v_var *a);
int place_map_4_2(v_var *a);
int my_music(v_var *a);

/*............... map ...............*/

void first_map(v_var *a);
int map1(v_var *a);
void camera(v_var *a);
void colision_first(v_var *a);
void display_colision(v_var *a);
int colision_up(v_var *a);
int colision_rigt(v_var *a);
int colision_down(v_var *a);
int colision_left(v_var *a);
void second_map(v_var *a);
void my_game_second(v_var *a);
void display_game_second(v_var *a);
int map2(v_var *a);
void third_map(v_var *a);
void display_game_third(v_var *a);
void my_game_third(v_var *a);
void display_last_game(v_var *a);
void my_last_game(v_var *a);
void last_map(v_var *a);
int map3(v_var *a);
int map4(v_var *a);
int check_place(v_var *a);
void cdf_ball(v_var *a);
void pose_ball(v_var *a);
void rect_particules(v_var *a);
void pause_mousse(v_var *a);

/* .............. cds ................*/

int up1(v_var *a);
int up2(v_var *a);
int up3(v_var *a);
int up4(v_var *a);
int right1(v_var *a);
int right2(v_var *a);
int right3(v_var *a);
int right4(v_var *a);
int down1(v_var *a);
int down2(v_var *a);
int down3(v_var *a);
int down4(v_var *a);
int left1(v_var *a);
int left2(v_var *a);
int left3(v_var *a);
int left4(v_var *a);
int check_shop2(v_var *a);
void reset_lose(v_var *a);
void enemy_reset(v_var *a);
void up_lvl(v_var *a);

/*............... pers ...............*/

void display_girl(v_var *a);
void my_girl(v_var *a);
void display_man(v_var *a);
void my_man(v_var *a);
void my_enemy(v_var *a);
void display_enemy(v_var *a);
int check_emy(v_var *a);
void open_door(v_var *a);
void display_battle(v_var *a);
void my_battle(v_var *a);
void battle_stage(v_var *a);
void rect3(v_var *a);
void take_items(v_var *a);
void menu(v_var *a);
void display_all_menu(v_var *a);
void my_all_menu(v_var *a);
void menu(v_var *a);
void shop_mousse(v_var *a);

/*............... wiwdow ...............*/

void open_window(v_var *a);
void my_pool_event(v_var *a);
void menu(v_var *a);
void display(v_var *a);
void champ_select(v_var *a);
void before_game(v_var *a);
void event_mousepress(v_var *a);
void dialogue_past(v_var *a);
void check_key(v_var *a);
void emy_interaction(v_var *a);
void battle(v_var *a);
void rect_witch(v_var *a);
void rect_ghost(v_var *a);
void my_putchar(char c);
int my_putstr(char *str);
char *my_convert_int(int nb);
char *my_revstr(char *str);
void count(int *tmp, int *a);
void display_text(v_var *a);
void my_text(v_var *a);
void text(v_var *a);
void items_display(v_var *a);
void my_items(v_var *a);
int check_shop(v_var *a);

/*............... menu ...............*/

void my_menu(v_var *a);
void display_menu(v_var *a);
void display_champ_select(v_var *a);
void my_champ_select(v_var *a);
void intro(v_var *a);
void display_intro(v_var *a);
void my_intro(v_var *a);
void rect_dialogue(v_var *a);
void game(v_var *a);
void display_game(v_var *a);
void my_game(v_var *a);
void my_tools(v_var *a);
void tools_display(v_var *a);
void a_interaction(v_var *a);
void health_display(v_var *a);
void my_health(v_var *a);
int check_lvl(v_var *a);
int check_life(v_var *a);
void enemy_turn(v_var *a);
void check_win(v_var *a);
void space_interaction(v_var *a);

#endif /* !PROTOTYPE_H_ */
