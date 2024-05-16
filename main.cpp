#include "raylib.h"
#include "player.h"

int main() {
	// �E�B���h�E������
	const int windowWidth{ 512 };
	const int windowHeight{ 380 };
	InitWindow(windowWidth, windowHeight, "RunGame");

	// ��`������
	const int rectangleWidth{ 50 };
	const int rectangleHeight{ 80 };

	int posY{ windowWidth - rectangleHeight };
	int velocity{ -10 };

	SetTargetFPS(60);
	while (!WindowShouldClose()){
		// start drawing
		BeginDrawing();
		ClearBackground(WHITE);

		// stop drawing
		EndDrawing();
	}
}