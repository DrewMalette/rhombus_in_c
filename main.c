
#include "rhombus.h"

int main() {
    //Camera camera = InitCamera("camera", 0, 0, 100, 100);
    
    //camera.rect.w = 101;
    
    Mob mob = InitMob("Drew", 5, "drew_spr.png");
    
    printf("%s %d\n", mob.name, mob.health);
    
    return 0;
}

