#include <stdio.h>
#include <string.h>

#include "rhombus.h"

#define SPRITE_SIZE 16

int main() {

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("error initializing SDL: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window* display = SDL_CreateWindow("rhombus in C",
                                           SDL_WINDOWPOS_CENTERED,
                                           SDL_WINDOWPOS_CENTERED,
                                           640, 480, 0);
    if (!display) {
        printf("error creating window: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    Uint32 render_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
    SDL_Renderer* rend = SDL_CreateRenderer(display, -1, render_flags);
    SDL_SetRenderDrawColor(rend, 255, 0, 0, 255);

    /* my defined stuff */
    camera_t camera1 = InitCamera(100, 0, 0, 640, 480);
    printf("%d\n", camera1.rect.w);

    mob_t player = InitMob(200, "Drew", 30, "gb-onion.png", 0, 0, 16, 24);
    printf("%s %d %d\n", player.name, player.image->w, player.image->h);

    for(int i=0; i < 10; i++) {
        player.health++;
    }

    printf("%d\n", player.health);

    //SDL_Surface* spritesheet;
    //spritesheet = IMG_Load("gb-onion.png");
    //player.image = spritesheet;

    SDL_SetColorKey(player.image, SDL_TRUE, SDL_MapRGB(player.image->format, 101, 255, 0));
    
    SDL_Texture* tex = SDL_CreateTextureFromSurface(rend, player.image);
    SDL_FreeSurface(player.image);
    SDL_Rect player_rect;
    SDL_Rect player_dest;

    player_rect.x = 0;
    player_rect.y = 0;
    player_rect.w = SPRITE_SIZE;
    player_rect.h = SPRITE_SIZE;

    player_dest.x = 10;
    player_dest.y = 10;
    player_dest.w = SPRITE_SIZE;
    player_dest.h = SPRITE_SIZE;

    SDL_RenderClear(rend);

    SDL_RenderCopy(rend, tex, &player_rect, &player_dest);
    SDL_RenderPresent(rend);

    SDL_Delay(5000);

    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(rend);
    SDL_DestroyWindow(display);
    SDL_Quit();

    return 0;
}
