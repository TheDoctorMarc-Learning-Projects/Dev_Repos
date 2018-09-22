#include<iostream>
#include<math.h>

using namespace std; 
typedef float type1; // we will use float for the "normalize" function to make sense  

class vec3 {
public: 
	type1 x, y, z; 
	vec3() {};
	vec3(type1 x, type1 y, type1 z){
		this->x = x; 
		this->y = y; 
		this->z = z; 
	};
	~vec3() {};

	vec3 operator+(const vec3 &v2) {
		return* (new vec3(this->x + v2.x, this->y + v2.y, this->z + v2.z)); 
	}
	vec3 operator-(const vec3 &v2) {
		return* (new vec3(this->x - v2.x, this->y - v2.y, this->z - v2.z));
	}
	bool operator=(const vec3 &v2) {
		bool ret; 
		if (this->x == v2.x && this->y == v2.y && this->z == v2.z) {
			ret = true; 
		}
		else {
			ret = false; 
		}
		return ret; 
	}
	vec3 operator==(const vec3 &v2) {
		this->x = v2.x; 
		this->y = v2.y; 
		this->z = v2.z; 
		return* this; 
	}

	int distance_to(const vec3 &v2) {
		return sqrt(pow(this->x - v2.x, 2) + pow(this->y - v2.y, 2) + +pow(this->z - v2.z, 2)); 
	}

	bool is_zero() {
		bool ret = false;
		if (this->x == 0 && this->y == 0 && this->z == 0) {
			ret = true; 
			cout << "vector (" << this->x << " " << this->y << " " << this->z << ") has all zeros!!" << endl; 
		}
		else{
			cout << "vector (" << this->x << " " << this->y << " " << this->z << ") does not have all zeros!!" << endl;
		}
		return ret;
	}

	vec3 zero() {
		cout << "vector (" << this->x << " " << this->y << " " << this->z << ") does not have all zeros " << endl;
		this->x = 0;
		this->y = 0;
		this->z = 0;
		cout << "but now the vector (" << this->x << " " << this->y << " " << this->z << ") is all zeros!!!!" << endl;
		return*this;
	}

	vec3 normalize() {
		int module = (pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2)); // cout << " module is " << module << endl; 
		this->x /= module; 
		this->y /= module;
		this->z /= module;
		return*this;
	}

}; 

	

void main() {
	vec3 v1(3, 2, 0); 
	vec3 v2(1, 1, 6);
	cout << "v1 is " << v1.x << " " << v1.y << " " << v1.z << endl;
	cout << "v2 is " << v2.x << " " << v2.y << " " << v2.z << endl;
	cout << endl; 

	vec3 v3 = v1 + v2; 
	cout << "v3 = " << v3.x << " " << v3.y << " " << v3.z << endl; 

	vec3 v4 = v1 - v2;
	cout << "v4 = " << v4.x << " " << v4.y << " " << v4.z << endl;

	cout << "v1 and v2 distance is " << v1.distance_to(v2) << endl; 

	vec3 zeros(0, 0, 0); 
	vec3 notzeros(7, 0, 8); 
	zeros.is_zero(); 
	notzeros.is_zero(); 

	cout << endl; 

	notzeros.zero(); 

	
	v1.normalize(); 
	cout << "vector v1 normalized to (" << v1.x << " " << v1.y << " " << v1.z << ") " << endl; 

	system("pause"); 
}

