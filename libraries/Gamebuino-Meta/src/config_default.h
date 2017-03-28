#ifndef FOLDER_NAME
#ifdef __SKETCH_NAME__
#define FOLDER_NAME __SKETCH_NAME__
#else
#define FOLDER_NAME "testsketch"
#endif
#endif

///////////////
// GUI settings
///////////////

//enable menu, keyboard, pop-up, volume adjust functions
#ifndef ENABLE_GUI
#define ENABLE_GUI 1
#endif

//40 = 40 frames (2sec) before start menu is skipped, 0 = no start menu, 255 = start menu until you press A
#ifndef START_MENU_TIMER
#define START_MENU_TIMER 255
#endif

#ifndef KEYBOARD_W
#define KEYBOARD_W 16
#endif

#ifndef KEYBOARD_H
#define KEYBOARD_H 8
#endif

#ifndef LCDHEIGHT
#define LCDHEIGHT 64
#endif

#ifndef LCDWIDTH
#define LCDWIDTH 80
#endif


///////////////
// save defines
///////////////

#ifndef SAVEBLOCK_NUM
#define SAVEBLOCK_NUM 64
#endif

#ifndef SAVECONF
#define SAVECONF {}
#endif

#ifndef SAVECONF_SIZE
#define SAVECONF_SIZE 0
#endif

#ifndef SAVEFILE_NAME
#define SAVEFILE_NAME "save.sav"
#endif