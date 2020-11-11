#include "rhombus.h"

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
