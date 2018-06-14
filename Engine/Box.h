#pragma once

#include "Graphics.h"

class Box {
public :
	void DrowBox(Graphics& gfx);
	void Init(float in_x, float in_y);
	bool IsColliding(int dudex, int dudey, int dudeWidth, int dudeHeiht);
	int getBarNo();
	void setBar(int n);
	void DrowBar(Graphics & gfx);
private:
	static constexpr float width = 20;
	static constexpr float height = 20;
	float x = 250;
	float y = 300;
	int widthBar = 1;
};