#ifndef SHAPE_H
#define SHAPE_H
#include "pch.h"
#include <string>

class Shape {
protected: 
	struct Vertex {
		double x;
		double y;
	};

	enum Area {
		NO_AREA = -1
	};

public:

	Shape() {}
	virtual ~Shape() {}

	virtual std::string getType() const = 0;
	virtual double area() = 0;
	virtual double circumference() = 0;
	virtual Vertex position() = 0;
	virtual bool isConvex() = 0;
	virtual double distance(Shape& shape) = 0;
	virtual double operator+(Shape& otherShape) {
		double area = this->area() + otherShape.area();
		return area;
	};
};

#endif