#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL2/SDL.h>


const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;

// ======================================================================
// run the main program with ./build/debug/exe
// ======================================================================

int main( void )
{
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
        return 1;
    }
    else
    {
        printf( "SDL initialized!\n" );
    }
    return 0;
}
