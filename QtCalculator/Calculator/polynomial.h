#ifndef POLYNOMIAL_HH
#define POLYNOMIAL_HH
#include"Complex.h"
/*a0*x^n + a1*x^(n-1) + ... + an-1*x^1 + an */
class Polynomial
{
	int n;
	Complex *p;
public:
    Polynomial(){}
	Polynomial(int nn,Complex *a);
    Polynomial(const Polynomial &poly);
    Polynomial & operator =(Polynomial Obj);
	 ~Polynomial(){delete [] p;}
    Complex poly_value(const Complex &x);           //多项式求值
    void poly_reduce(const Complex &root);          //多项式降阶
    double poly_search_R();
    double fitness(Complex x);      //计算精度1/(1+poly_value(x).cfabs())
    int getOrder(){return n;}
    void setOrder(int n){this->n=n;}
    Complex getRatio(int index){return p[index];}
};
#endif
