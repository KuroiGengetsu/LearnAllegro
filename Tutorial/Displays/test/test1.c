#include <stdio.h>
#include <allegro5/allegro.h>

int main(int argc, char **argv) {

	ALLEGRO_DISPLAY *display = NULL;

	if (!al_init()) {
		fprintf(stderr, "Failed to initialize allegro!\n");
		return -1;
	}

	display = al_create_display(640, 480);
	if(!display) {
		fprintf(stderr, "Failed to create display!\n");
		return -1;
	}

	for(int i = 0, j = 250; i < 250; i+=10, j-=10) {
		al_clear_to_color(al_map_rgb(i, j, 5));	
		sleep(1);
		al_flip_display();
	}

	al_rest(1.0);

	al_destroy_display(display);
	return 0;
}

