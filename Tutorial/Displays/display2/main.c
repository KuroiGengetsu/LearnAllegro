#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>

int main(int argc, char **argv) {
	ALLEGRO_DISPLAY        *display = NULL;
	ALLEGRO_DISPLAY_MODE   disp_data;

	if (!al_init()) {
		fprintf(stderr, "failed to init allegro!\n");
		return -1;
	}
	al_init_image_addon();
	al_init_primitives_addon();

	al_get_display_mode(al_get_num_display_modes() - 1,
			&disp_data);

	al_set_new_display_flags(ALLEGRO_FULLSCREEN);
	display = al_create_display(disp_data.width,
			disp_data.height);

	al_rest(4.0);
	al_destroy_display(display);
	return 0;
}

