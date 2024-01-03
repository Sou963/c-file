#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("CSE", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

    // Draw the letter C
    SDL_RenderDrawLine(renderer, 100, 100, 100, 300);
    SDL_RenderDrawLine(renderer, 100, 100, 200, 100);
    SDL_RenderDrawLine(renderer, 100, 300, 200, 300);

    // Draw the letter S
    SDL_RenderDrawLine(renderer, 250, 100, 350, 100);
    SDL_RenderDrawLine(renderer, 250, 100, 250, 200);
    SDL_RenderDrawLine(renderer, 250, 200, 350, 200);
    SDL_RenderDrawLine(renderer, 350, 200, 350, 300);
    SDL_RenderDrawLine(renderer, 350, 300, 250, 300);

    // Draw the letter E
    SDL_RenderDrawLine(renderer, 400, 100, 500, 100);
    SDL_RenderDrawLine(renderer, 400, 100, 400, 200);
    SDL_RenderDrawLine(renderer, 400, 200, 500, 200);
    SDL_RenderDrawLine(renderer, 400, 300, 500, 300);

    SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
