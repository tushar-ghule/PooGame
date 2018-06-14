#pragma once

#include "Graphics.h"
class Poo {
	public:
		void Init(float in_x, float in_y, float in_vx, float in_vy);
		void update();
		void CollidingTest(int dudex, int dudey, int dudeWidth, int dudeHeight);
		void Drow(Graphics& gfx);
		bool IsEaten() const;
		void move();
	private:
		float x;
		float y;
		float vx;
		float vy;
		bool isEaten = false;
		static constexpr float width = 24;
	    static constexpr float height = 24;
};