#include "raylib.h"
#include "player.h"

int main() {
	// ウィンドウ初期化
	const int windowWidth{ 512 };
	const int windowHeight{ 380 };
	InitWindow(windowWidth, windowHeight, "RunGame");

	// 矩形初期化
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