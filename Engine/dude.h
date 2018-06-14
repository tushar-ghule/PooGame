#pragma once

#include "Graphics.h"
class dude {
public:
    void ClampScreen();
	void Drow(Graphics& gfx);
	void Up();
	void Down();
	void Left();
	void Right();
	int getx();
	int gety();
	int getwidth();
	int getheight();
private:
	int x = 533;
	int y = 350;
	int width = 20;
	int height = 20;
};