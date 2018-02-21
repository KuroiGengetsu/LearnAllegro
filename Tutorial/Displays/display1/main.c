// gcc main.c -o main $(pkg-config --libs allegro-5)
// sudo ./main
#include <stdio.h>
#include <allegro5/allegro.h>

// you need `int argc, char **argv`
// A standard main function, with the argument count and argument vector parameters.
int main(int argc, char **argv) {

	// initialize the Allegro library.
	ALLEGRO_DISPLAY *display = NULL;

	if (!al_init()) {
		fprintf(stderr, "Failed to initiaalize allegro!\n");	
		return -1;
	}

	// create a display with the given width and height.
	// return NULL if it failed.
	display = al_create_display(640, 480);
	if (!display) {
		fprintf(stderr, "Failed to create display!\n");
		return -1;
	}

	// al_map_rgb(red, green, blue), which takes 3 arguments RGB,
	// and will return a {@code: ALLEGRO_COLOR} structure.
	// al_clear_to_color clears the current display to a given color
	for (int i = 0; i < 250; i += 10) {
	    al_clear_to_color(al_map_rgb(i, 30, 60));
		sleep(1.9);
	    // flip
	    al_flip_display();
	}


	// how many seconds to end the program. float point argument
	al_rest(1.0);

	// distroy the display and free the memory
	al_destroy_display(display);

	return 0;
}

