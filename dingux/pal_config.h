#ifndef PAL_CONFIG_H
# define PAL_CONFIG_H

#define PAL_PREFIX            "./"
#define PAL_SAVE_PREFIX       "./"

#  define PAL_DEFAULT_WINDOW_WIDTH   320
#  define PAL_DEFAULT_WINDOW_HEIGHT  240

# if SDL_VERSION_ATLEAST(2,0,0)
#  define PAL_VIDEO_INIT_FLAGS  (SDL_WINDOW_SHOWN)
# else
#  define PAL_VIDEO_INIT_FLAGS  (SDL_SWSURFACE | SDL_FULLSCREEN)
# endif

#define PAL_SDL_INIT_FLAGS	(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_JOYSTICK)

# define PAL_PLATFORM         "DINGOO & Dingux"
# define PAL_CREDIT           "Rikku2000"
# define PAL_PORTYEAR         "2011"

#endif
