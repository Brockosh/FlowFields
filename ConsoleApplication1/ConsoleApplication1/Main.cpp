#include "raylib.h"
#include <iostream>

int main()
{

    SetTargetFPS(60);

    InitWindow(1280, 720, "Flow Fields");

	while (!WindowShouldClose())
	{
		BeginDrawing();

		DrawText("HI", 1, 1, 20, RED);

		EndDrawing();

	}
}

