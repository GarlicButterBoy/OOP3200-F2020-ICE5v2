#pragma once
#ifndef __VECTOR3D__
#define __VECTOR3D__
#include <string>


class Vector3D
{

public:
	Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f);
	~Vector3D();

	//Mutators - Setters
	float GetX() const;
	float GetY() const;
	float GetZ() const;

	//Accesssors - Getters
	void SetX(const float x);
	void SetY(const float y);
	void SetZ(const float z);
	void set(const float x, const float y, const float z);
	
	std::string ToString() const;


private:
	float m_x;
	float m_y;
	float m_z;

};

#endif