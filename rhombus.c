#include "rhombus.h"

mob_t InitMob(int uid, char *name, short health, char *filename, int x, int y, int w, int h) {
    mob_t mob;
    mob.name = name;
    mob.health = health;
    mob.image = IMG_Load(filename);
    mob.rect.x = x;
    mob.rect.y = y;
    mob.rect.w = w;
    mob.rect.h = h;
    return mob;
}

camera_t InitCamera(int uid, int x, int y, int w, int h) {
    camera_t camera;    
    camera.uid = uid;
    camera.rect.x = x;
    camera.rect.y = y;
    camera.rect.w = w;
    camera.rect.h = h;    
    return camera;
}

int y_sort_cmp(const void *a, const void *b) {
   const mob_t *m1 = a;
   const mob_t *m2 = b;
   return m1->rect.y - m2->rect.y;
}

void print_mob(mob_t mobs[]) {
    printf("%s", mobs[0].name);
}

void y_sort(mob_t mobs[], int array_len) {
    int n = array_len / sizeof(mob_t);
    qsort(mobs, n, sizeof(mob_t), y_sort_cmp);
}
