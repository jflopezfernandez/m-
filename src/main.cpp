
#include "includes\Main.hpp"


class Point {
	private:
		int x,
			y,
			z;
	
	public:
		Point() = delete;
		Point(int a, int b, int c) : x(a), y(b), z(c) { }
		
		virtual ~Point() { std::cout << "Point destructor called...\n"; }
	
		void setX(int n) { x = n; }
		void setY(int n) { y = n; }
		void setZ(int n) { z = n; }
		
		constexpr int getX() const { return x; }
		constexpr int getY() const { return y; }
		constexpr int getZ() const { return z; }
};


int main()
{
	system("cls");
	
	//
	
	return 0;
}