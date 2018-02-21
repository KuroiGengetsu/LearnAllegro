#include <stdio.h>
#include <allegro5/allegro.h>

int main(int argc, char **argv) {
	ALLEGRO_DISPLAY *display = NULL;
	if (!al_init()) {
		fprintf(stderr, "Fail to initialize allegro!\n");
		return -1;	
	}
	display = al_create_display(640, 480);
	if (!display) {
		fprintf(stderr, "Failed to create display!\n");	
		return -1;
	}
	al_clear_to_color(al_map_rgb(40, 13, 53));
	al_flip_display();
	al_rest(4.0);
	al_destroy_display(display);
	return 0;
}

