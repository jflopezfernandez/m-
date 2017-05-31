#ifndef _NUMBER_HPP
#define _NUMBER_HPP


class Number {
	private:
		int num;
		int den;
		
	public:
		Number() = delete;
		Number(int a, int b) num(a), den(b) { }
		
		~Number();
		
		void setNum(int n) { num = n; }
		void setDen(int n) { den = n; }
		
		constexpr int getNum() const { return num; }
		constexpr int getDen() const { return den; }
		
		void print();
};



#endif /* _NUMBER_HPP */