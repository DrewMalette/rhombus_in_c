
#include "rhombus.h"

int main() {
    //Camera camera = InitCamera("camera", 0, 0, 100, 100);
    
    //camera.rect.w = 101;
    
    mob_t mob = InitMob(0, "Drew", 30, NULL, 0, 0, 16, 24);
    printf("%s %d\n", mob.name, mob.health);
    
    return 0;
}

