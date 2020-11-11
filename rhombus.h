/* camera.h */

#ifndef RHOMBUS_H_
#define RHOMBUS_H_

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

Mob InitMob(char *name, short health, char *filename);
Camera InitCamera(char *uid, int x, int y, int w, int h);

#endif /* RHOMBUS_H_ */
