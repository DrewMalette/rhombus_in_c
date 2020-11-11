/* camera.c */

#include <stdio.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

typedef struct {
    char *uid;
    SDL_Rect rect;
} Camera;

typedef struct {
    char *name;
    short health;
    SDL_Surface* image;
} Mob;

Mob InitMob(char *name, short health, char *filename) {
    Mob mob;
    mob.name = name;
    mob.health = health;
    //mob.image = IMG_Load(filename);
    return mob;
}

Camera InitCamera(char *uid, int x, int y, int w, int h) {
    Camera camera;    
    camera.uid = uid;
    camera.rect.x = x;
    camera.rect.y = y;
    camera.rect.w = w;
    camera.rect.h = h;    
    return camera;
}

int main() {
    //Camera camera = InitCamera("camera", 0, 0, 100, 100);
    
    //camera.rect.w = 101;
    
    Mob mob = InitMob("Drew", 5, "drew_spr.png");
    
    printf("%s %d\n", mob.name, mob.health);
    
    return 0;
}
