#ifndef _NUMBER_HPP
#define _NUMBER_HPP


class Number {
	private:
		int num;
		int den;
		
	public:
		Number();
		Number(int a, int b) : num(a), den(b) { }
		
		void setNum(int n) { num = n; }
		void setDen(int n) { den = n; }
		
		int getNum() const { return num; }
		int getDen() const { return den; }
		
		void print();
};



#endif /* _NUMBER_HPP */