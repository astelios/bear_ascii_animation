#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "bear.h"

/*
 * original ascii art credits: Hayley Jane Wakenshaw
 * link: https://www.asciiart.eu/toys/teddy-bears
*/

struct animation bear_animation;

void frames_init() {
    bear_animation = (struct animation) {
        .frames[0] = {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "__________________________________________________________________",
            ""
        },
        
        .frames[1] = {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "________________________"BEAR(",--.")"______________________________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },

        .frames[2] = {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "________________________"BEAR(",--.")"___________"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },

        .frames[3] = {
            "",
            "",
            "",
            "",
            "",
            "",
            "                              "BEAR("_")"     "BEAR("_"),
            "________________________"BEAR(",--.")"_"BEAR("(")"_"BEAR("\\")"___"BEAR("/")"_"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[4] = {
            "",
            "",
            "",
            "",
            "",
            "                              "BEAR("_")"     "BEAR("_"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")"),
            "________________________"BEAR(",--.")"__"BEAR(")")"_"BEAR_EYE(".")"_"BEAR_EYE(".")"_"BEAR("(")"__"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[5] = {
            "",
            "",
            "",
            "",
            "                              "BEAR("_")"     "BEAR("_"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")"),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[6] = {
            "",
            "",
            "",
            "",
            "                              "BEAR("_")"     "BEAR("_")"     "BUBBLE("/_"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")"),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[7] = {
            "",
            "",
            "                                           "BUBBLE("/"),
            "                                          "BUBBLE("("),
            "                              "BEAR("_")"     "BEAR("_")"     "BUBBLE("/_"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\""),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[8] = {
            "",
            "                                            "BUBBLE(",-"),
            "                                           "BUBBLE("/"),
            "                                          "BUBBLE("("),
            "                              "BEAR("_")"     "BEAR("_")"     "BUBBLE("/_"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-"),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[9] = {
            "                                               "BUBBLE("_"),
            "                                            "BUBBLE(",-\""),
            "                                           "BUBBLE("/"),
            "                                          "BUBBLE("("),
            "                              "BEAR("_")"     "BEAR("_")"     "BUBBLE("/_"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._"),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[10] = {
            "                                               "BUBBLE("___"),
            "                                            "BUBBLE(",-\""),
            "                                           "BUBBLE("/"),
            "                                          "BUBBLE("("),
            "                              "BEAR("_")"     "BEAR("_")"     "BUBBLE("/_"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-.___"),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[11] = {
            "                                               "BUBBLE("_____"),
            "                                            "BUBBLE(",-\""),
            "                                           "BUBBLE("/"),
            "                                          "BUBBLE("("),
            "                              "BEAR("_")"     "BEAR("_")"     "BUBBLE("/_"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._____"),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[12] = {
            "                                               "BUBBLE("_____"),
            "                                            "BUBBLE(",-\"     \"-."),
            "                                           "BUBBLE("/"),
            "                                          "BUBBLE("("),
            "                              "BEAR("_")"     "BEAR("_     ")BUBBLE("/_"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._____,-\""),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[13] = {
            "                                               "BUBBLE("_____"),
            "                                            "BUBBLE(",-\"     \"-."),
            "                                           "BUBBLE("/           \\"),
            "                                          "BUBBLE("(             )"),
            "                              "BEAR("_")"     "BEAR("_     ")BUBBLE("/_           /"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._____,-\""),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[14] = {
            "                                               "BUBBLE("_____"),
            "                                            "BUBBLE(",-\"     \"-."),
            "                                           "BUBBLE("/           \\"),
            "                                          "BUBBLE("(")" "TEXT1(TEXT_STRING)" "BUBBLE(")"),
            "                              "BEAR("_")"     "BEAR("_     ")BUBBLE("/_           /"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._____,-\""),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[15] = {
            "                                               "BUBBLE("_____"),
            "                                            "BUBBLE(",-\"     \"-."),
            "                                           "BUBBLE("/           \\"),
            "                                          "BUBBLE("(")" "TEXT2(TEXT_STRING)" "BUBBLE(")"),
            "                              "BEAR("_")"     "BEAR("_     ")BUBBLE("/_           /"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._____,-\""),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[16] = {
            "                                               "BUBBLE("_____"),
            "                                            "BUBBLE(",-\"     \"-."),
            "                                           "BUBBLE("/           \\"),
            "                                          "BUBBLE("(")" "TEXT1(TEXT_STRING)" "BUBBLE(")"),
            "                              "BEAR("_")"     "BEAR("_     ")BUBBLE("/_           /"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._____,-\""),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[17] = {
            "                                               "BUBBLE("_____"),
            "                                            "BUBBLE(",-\"     \"-."),
            "                                           "BUBBLE("/           \\"),
            "                                          "BUBBLE("(")" "TEXT2(TEXT_STRING)" "BUBBLE(")"),
            "                              "BEAR("_")"     "BEAR("_     ")BUBBLE("/_           /"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._____,-\""),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[18] = {
            "                                               "BUBBLE("_____"),
            "                                            "BUBBLE(",-\"     \"-."),
            "                                           "BUBBLE("/           \\"),
            "                                          "BUBBLE("(")" "TEXT1(TEXT_STRING)" "BUBBLE(")"),
            "                              "BEAR("_")"     "BEAR("_     ")BUBBLE("/_           /"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._____,-\""),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        },
        
        .frames[19] = {
            "                                               "BUBBLE("_____"),
            "                                            "BUBBLE(",-\"     \"-."),
            "                                           "BUBBLE("/           \\"),
            "                                          "BUBBLE("(")" "TEXT2(TEXT_STRING)" "BUBBLE(")"),
            "                              "BEAR("_")"     "BEAR("_     ")BUBBLE("/_           /"),
            "                             "BEAR("(")" "BEAR("\\---/")" "BEAR(")")"      "BUBBLE("\"-._____,-\""),
            "                              "BEAR(")")" "BEAR_EYE(".")" "BEAR_EYE(".")" "BEAR("("),
            "________________________"BEAR(",--.")"_"BEAR("(")"___"BEAR("Y")"___"BEAR(")")"_"BEAR(",--.")"_______________________",
            "                        "BEAR("`")BEAR_SKIN("--")BEAR("'")"           "BEAR("`")BEAR_SKIN("--")BEAR("'")
        }
    };
}

void print_frame(int frame_num) {
    printf("\n\n\n\n");
    for(int i=0; i<FRAME_LINES; i++) {
        printf("\t\t%s\n", bear_animation.frames[frame_num][i]);
    }
}

void play_animation() {
    for(int i=0; i<FRAME_NUM; i++) {
        system("clear");
        print_frame(i);
        if(i<=5)			// Bear frame group
            usleep(TO_uSEC(BEAR_TIME));
        else if(i<=13) 		// Bubble frame group
            usleep(TO_uSEC(BUBBLE_TIME));
        else				// Text frame group
            usleep(TO_uSEC(TEXT_TIME));
    }
}

void play_animation_reverse() {
    for(int i=FRAME_NUM-1; i>=0; i--) {
        system("clear");
        print_frame(i);
        if(i<=5)
            usleep(TO_uSEC(BEAR_TIME));
        else if(i<=13)
            usleep(TO_uSEC(BUBBLE_TIME));
        else
            usleep(TO_uSEC(TEXT_TIME));
    }
}

int main(int argc, char const *argv[])
{
    frames_init();
    while(1) {
        play_animation();
        play_animation_reverse();
    }

    return 0;
}
