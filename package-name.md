# Allefro-Package-Name

You need to compile using `gcc -g -o main main.c $(pkg-config --libs allegro-5 allegro_XXXXX-5)`. Besides, `allegro_XXXXX-5` maybe one(or more) of the following(depends on what you need):

- /usr/lib/pkgconfig/allegro_audio-5.pc
- /usr/lib/pkgconfig/allegro_acodec-5.pc
- /usr/lib/pkgconfig/allegro_color-5.pc
- /usr/lib/pkgconfig/allegro-5.pc
- /usr/lib/pkgconfig/allegro_main-5.pc
- /usr/lib/pkgconfig/allegro_memfile-5.pc
- /usr/lib/pkgconfig/allegro_physfs-5.pc
- /usr/lib/pkgconfig/allegro_dialog-5.pc
- /usr/lib/pkgconfig/allegro_ttf-5.pc
- /usr/lib/pkgconfig/allegro_image-5.pc
- /usr/lib/pkgconfig/allegro_font-5.pc
- /usr/lib/pkgconfig/allegro_primitives-5.pc
- /usr/lib/pkgconfig/allegro_video-5.pc
