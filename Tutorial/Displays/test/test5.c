#include <stdio.h>
#include <allegro5/allegro.h>

int main(int argc, char **argv) {
	ALLEGRO_DISPLAY *display = NULL;
	
	if(!al_init()) {
		fprintf(stderr, "allegro init failed\n");
		return -1;
	}

	display = al_create_display(640, 480);
	if(!display) {
		fprintf(stderr, "display init failed\n");
		return -1;
	}

	for(int i = 0; i < 255; i++) {
		for(int j = 0; j < 1000; j++);
		al_clear_to_color(al_map_rgb(i, i, i));
		al_flip_display();
	}

	al_rest(5.0);
	al_destroy_display(display);
	return 0;
}

