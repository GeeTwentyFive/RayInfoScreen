// RayInfoScreen - https://github.com/GeeTwentyFive/RayInfoScreen

#ifndef _RAY_INFO_SCREEN_H
#define _RAY_INFO_SCREEN_H

#include "raylib/raylib.h"



int RayInfoScreen(char *text) {
        if (
                IsKeyPressed(KEY_ESCAPE) ||
                IsKeyPressed(KEY_ENTER) ||
                IsMouseButtonPressed(MOUSE_BUTTON_LEFT) ||
		WindowShouldClose()
        ) return 1;

        BeginDrawing();

        ClearBackground(BLACK);

        int fontSize = 14 * GetScreenHeight()/180;
        Vector2 textSize = MeasureTextEx(GetFontDefault(), text, fontSize, fontSize/10);
        DrawText(
                text,
                GetScreenWidth()/2 - textSize.x/2,
                GetScreenHeight()/2 - textSize.y/2,
                fontSize,
                WHITE
        );

        EndDrawing();

        return 0;

}



#endif // _RAY_INFO_SCREEN_H
