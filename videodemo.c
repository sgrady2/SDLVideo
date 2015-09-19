/*
	SDL Video Demo
	demonstrates SDL's video working by moving dots around a screen
	written by Sayuri L. Kitsune (2012)
*/

/* Includes */
#include <SDL.h>

/* Globals */
SDL_Surface *demo_screen;

/* Main */
int main(int argn,char **argv)
{
	SDL_Event ev;
	int active;
	/* Initialize SDL */
	if(SDL_Init(SDL_INIT_VIDEO) != 0)
		fprintf(stderr,"Could not initialize SDL: %s\n",SDL_GetError());
	/* Open main window */
	demo_screen = SDL_SetVideoMode(320,240,0,SDL_HWSURFACE|SDL_DOUBLEBUF);
	if(!demo_screen)
		fprintf(stderr,"Could not set video mode: %s\n",SDL_GetError());
	/* Main loop */
	active = 1;
	while(active)
	{
		/* Handle events */
		while(SDL_PollEvent(&ev))
		{
			if(ev.type == SDL_QUIT)
				active = 0; /* End */
		}
	}
	/* Exit */
	SDL_Quit();
	return 0;
}

