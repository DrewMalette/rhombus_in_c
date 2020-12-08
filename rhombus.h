/* camera.h */

#ifndef RHOMBUS_H_
#define RHOMBUS_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

typedef struct {
    int uid; /* should uid be an int? yes. yes it should */
    SDL_Rect rect;
} camera_t;

typedef struct {
    int uid;
    char *name;
    short health;
    SDL_Surface* image;
    SDL_Rect rect;
} mob_t;

mob_t InitMob(int uid, char *name, short health, char *filename, int x, int y, int w, int h);
camera_t InitCamera(int uid, int x, int y, int w, int h);
int y_sort_cmp(const void *a, const void *b);
void y_sort(mob_t mobs[], int array_len);

#endif /* RHOMBUS_H_ */
