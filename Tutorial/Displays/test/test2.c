#include <stdio.h>
#include <allegro5/allegro.h>

int main(int argc, char **argv) {
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_DISPLAY *display2 = NULL;
	if(!al_init()) {
		fprintf(stderr, "Failed to initialize allegro!\n");
		return -1;
	}
	display = al_create_display(640, 480);
	display2 = al_create_display(640, 480);
	if(!display || !display2) {
		fprintf(stderr, "Failed to create display!\n");
		return -1;
	}
	al_clear_to_color(al_map_rgb(233, 233, 233));
	al_flip_display();
	al_rest(10.0);
	al_destroy_display(display);
	al_destroy_display(display2);
	return 0;
}

