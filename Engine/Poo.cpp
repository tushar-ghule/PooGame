#include "Poo.h"
#include "Graphics.h"

void Poo::Init(float in_x, float in_y, float in_vx, float in_vy)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;

}

void Poo::update() {
	x += vx;
	y += vy;

	if (x < 0) {
		x =  0;
		vx = -vx;
	}
	else if (x + width - 1.0f >= float(Graphics::ScreenWidth)) {
		x =   Graphics::ScreenWidth - width;
		vx = -vx;
	}

	if (y < 0) {
		y =  0;
		vy = -vy;
	}
	else if (y + height - 1.0f >= float(Graphics::ScreenHeight)) {
		y = float(Graphics::ScreenHeight) - height;
		vy = -vy;
	}
	
}

void Poo::CollidingTest(int dudex, int dudey, int dudeWidth, int dudeHeight)
{
	int dudeRight = dudex + dudeWidth;
	int dudeBottom = dudey + dudeHeight;
	float pooRight = x + width;
	float pooBottom = y + height;
	// Poo::width 0 - poo

	if (pooRight >= dudex && x <= dudeRight && y <= dudeBottom && pooBottom >= dudey)
		isEaten = true;
}

void Poo::Drow(Graphics& gfx)
{
	int int_x = (int)x;
	int int_y = (int)y;
	gfx.PutPixel(14 + int_x, 0 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 1 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 1 + int_y, 138, 77, 0);
	gfx.PutPixel(20 + int_x, 1 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 2 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 2 + int_y, 138, 77, 0);
	gfx.PutPixel(20 + int_x, 2 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 3 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 4 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 4 + int_y, 138, 77, 0);
	gfx.PutPixel(21 + int_x, 4 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 5 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 5 + int_y, 138, 77, 0);
	gfx.PutPixel(21 + int_x, 5 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 6 + int_y, 138, 77, 0);
	gfx.PutPixel(20 + int_x, 6 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 7 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 7 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 7 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 7 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 8 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 8 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 8 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 9 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 9 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 9 + int_y, 102, 57, 0);
	gfx.PutPixel(13 + int_x, 9 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 9 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 9 + int_y, 51, 28, 0);
	gfx.PutPixel(21 + int_x, 9 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 10 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 10 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 10 + int_y, 102, 57, 0);
	gfx.PutPixel(13 + int_x, 10 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 10 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 10 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 10 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 11 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 11 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(16 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 12 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 12 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 12 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 12 + int_y, 111, 62, 0);
	gfx.PutPixel(13 + int_x, 12 + int_y, 102, 57, 0);
	gfx.PutPixel(14 + int_x, 12 + int_y, 102, 57, 0);
	gfx.PutPixel(15 + int_x, 12 + int_y, 102, 57, 0);
	gfx.PutPixel(16 + int_x, 12 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 13 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 13 + int_y, 109, 61, 0);
	gfx.PutPixel(11 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 13 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(8 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(4 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 15 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 15 + int_y, 116, 65, 0);
	gfx.PutPixel(8 + int_x, 15 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 15 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 15 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(16 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(17 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(18 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(2 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(3 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(4 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 16 + int_y, 116, 65, 0);
	gfx.PutPixel(8 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 16 + int_y, 109, 61, 0);
	gfx.PutPixel(14 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 16 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 17 + int_y, 87, 49, 0);
	gfx.PutPixel(2 + int_x, 17 + int_y, 87, 49, 0);
	gfx.PutPixel(3 + int_x, 17 + int_y, 87, 49, 0);
	gfx.PutPixel(4 + int_x, 17 + int_y, 87, 49, 0);
	gfx.PutPixel(5 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 17 + int_y, 43, 24, 0);
	gfx.PutPixel(8 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 17 + int_y, 40, 22, 0);
	gfx.PutPixel(14 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 17 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 17 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 17 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 17 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(2 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(3 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(4 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(5 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(8 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 18 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(21 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(22 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 19 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(2 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(3 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(4 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(5 + int_x, 19 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(8 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 19 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 19 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(21 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(22 + int_x, 19 + int_y, 65, 36, 0);
	gfx.PutPixel(23 + int_x, 19 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(2 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(3 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(4 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(8 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 20 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(21 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(22 + int_x, 20 + int_y, 65, 36, 0);
	gfx.PutPixel(23 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(2 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(3 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(4 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(5 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(8 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(16 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(17 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(18 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(21 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(22 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 22 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(2 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(3 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(4 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(5 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(6 + int_x, 22 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(2 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(3 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(4 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 23 + int_y, 51, 28, 0);

}

bool Poo::IsEaten() const
{
	return isEaten;
}

void Poo::move()
{
	x += vx;
	y += vy;
}
