#include "Box.h"
#include "Graphics.h"

void Box::DrowBox(Graphics& gfx)
{
	for (float i = x; i < x + width; i++) {
		for (float j = y; j < y + height; j++) {
			gfx.PutPixel((int)i, (int)j, 255, 255, 255);
		}
	}
}

void Box::Init(float in_x, float in_y)
{
	x = in_x;
	y = in_y;
}

bool Box::IsColliding(int dudex, int dudey, int dudeWidth, int dudeHeight)
{
	float dudeRight = float(dudex + dudeWidth);
	float dudeBottom = float(dudey + dudeHeight);
	float boxRight = x + width;
	float boxBottom = y + height;
	// Poo::width 0 - poo

	return  (boxRight >= dudex && x <= dudeRight && y <= dudeBottom && boxBottom >= dudey);
		
}

int Box::getBarNo()
{
	return widthBar;
}

void Box::setBar(int n)
{
	widthBar = n;
}

void Box::DrowBar(Graphics& gfx)
{
	int x = 5;
	int y = 5;
	int height = 10;
	int width = widthBar;
	for (int i = x; i < x + width; i++) {
		for (int j = y; j < y + height; j++) {
			gfx.PutPixel(i, j, 255, 100, 200);
		}
	}
}

