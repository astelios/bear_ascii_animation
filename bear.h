

// Colors
#define BLUE                "\x1b[34m"
#define ANSI_COLOR_RESET    "\x1b[0m"
#define INTENSE_BROWN       "\033[38;5;130m"
#define LIGHT_GREEN         "\033[38;5;10m"
#define LIGHT_SKIN          "\033[38;5;223m"
#define MEDIUM_SKIN         "\033[38;5;137m"
#define DARK_SKIN           "\033[38;5;94m" 
#define LIGHT_PINK          "\033[38;5;217m" 
#define INTENSE_PINK        "\033[38;5;198m" 

#define FRAME_NUM 20
#define FRAME_LINES 9

// Different elements colors
#define BEAR_COLOR INTENSE_BROWN
#define BEAR_EYES_COLOR BLUE
#define BEAR_SKIN_COLOR MEDIUM_SKIN
#define TEXT_BUBBLE_COLOR INTENSE_PINK
#define TEXT_COLOR1 LIGHT_PINK
#define TEXT_COLOR2 INTENSE_PINK

#define TEXT_STRING "i love you!"

#define TO_uSEC(s) s * 1000000
#define BEAR_TIME 0.5
#define BUBBLE_TIME 0.03
#define TEXT_TIME 0.5


// Macros for monstrocity
#define BEAR(s) BEAR_COLOR s ANSI_COLOR_RESET
#define BEAR_EYE(s) BEAR_EYES_COLOR s ANSI_COLOR_RESET
#define BEAR_SKIN(s) BEAR_SKIN_COLOR s ANSI_COLOR_RESET
#define BUBBLE(s) TEXT_BUBBLE_COLOR s ANSI_COLOR_RESET
#define TEXT1(s) TEXT_COLOR1 s ANSI_COLOR_RESET
#define TEXT2(s) TEXT_COLOR2 s ANSI_COLOR_RESET

struct animation {
    char *frames[FRAME_NUM][FRAME_LINES];
};