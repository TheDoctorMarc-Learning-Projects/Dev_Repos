#ifndef VECTOR_CLASS_H
#define VECTOR_CLASS_H

#include<math.h>

template <class type1>

class vec3 {	
public: 
	type1 x, y, z;
	vec3() {};
	vec3(const type1 x, const type1 y, const type1 z) :x(x), y(y), z(z) {};
	vec3(const type1 x, const type1 y, const type1 z) {
		this->x = pow(x, 2); 
		this->y = pow(y, 2);
		this->z = pow(z, 2);
	};
	~vec3() {};

	vec3 operator+(const vec3 &v2) {
		return*vec3(this->x + v2.x, this->y + v2.y, this->z + v2.z));
	}

	vec3 operator-(const vec3 &v2) {
		return*vec3(this->x - v2.x, this->y - v2.y, this->z - v2.z));
	}

	vec3 operator+=(const vec3 &v2) {
		this->x += v2.x; 
		this->y += v2.y;
		this->z += v2.z;
		return*this; 
	}

	vec3 operator-=(const vec3 &v2) {
		this->x -= v2.x;
		this->y -= v2.y;
		this->z -= v2.z;
		return*this;
	}

	bool operator=(const vec3 &v2) const {
		if (this->x == v2.x && this->y == v2.y && this->z == v2.z) {
			return true;
		}
		return false; 
	}

	vec3 operator==(const vec3 &v2) {
		this->x = v2.x;
		this->y = v2.y;
		this->z = v2.z;
		return*this;
	}

	type1 distance_squared(const vec3 &v2) {
		type1 ret; 
		pow(ret, 2) = pow(this->x - v2.x, 2) + pow(this->y - v2.y, 2) + +pow(this->z - v2.z, 2);
		return ret; 
	}

	bool is_zero() const {
		if (this->x == this->y == this->z == 0.0f) {
			return true; 
		}
		return false; 
	}

	vec3 zero() {
		this->x = this->y = this->z = 0.0f;
		return*this;
	}

	vec3 normalize() {
		type1 module = (pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2)); 
		this->x /= module;
		this->y /= module;
		this->z /= module;
		return*this;
	}
};

#endif
