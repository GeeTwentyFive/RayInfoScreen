For [raylib](https://github.com/raysan5/raylib).

Displays info screen independent of drawing loop and rest of program.

Usage: `int RayInfoScreen(char *text)`

Returns `1` when user has:
- Pressed Escape
- Pressed Enter
- Left clicked in window
- Sent close request to window

Otherwise returns `0`.

Has to be used either in its own loop or *after* other stuff has already been drawn.

Example:
```c
#include "raylib/raylib.h"

#include "RayInfoScreen.h"



int main() {

	InitWindow(1280, 720, 0);

	while (!WindowShouldClose()) {

		BeginDrawing();

			// This will not be drawn (framebuffer is cleared by RayInfoScreen()):
			DrawFPS(10, 10);

			while(!RayInfoScreen("TEST"));

			// This will not be reached until user closes info screen:
			break;

		EndDrawing();

	}

	return 0;

}
```

Usage examples: Error message, loading/connecting message (while waiting for thread/async), debugging
