#pragma once
#include "Shape.h"
class RectangleShape :
	public Shape
{
public:
	RectangleShape(COLORREF color, int width);
	~RectangleShape(void);
	void Draw(HDC hdc, POINT dot1, LPARAM dot2);
};

