#ifndef _POINT_HPP
#define _POINT_HPP


class Point {
	private:
		int x,
			y,
			z;
	
	public:
		Point() { }
		constexpr Point(int a, int b, int c) : x(a), y(b), z(c) { }
	
		void setX(int n) { x = n; }
		void setY(int n) { y = n; }
		void setZ(int n) { z = n; }
		
		constexpr int getX() const { return x; }
		constexpr int getY() const { return y; }
		constexpr int getZ() const { return z; }
		
		void print() const;
};



#endif /* _POINT_HPP */