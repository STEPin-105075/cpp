#include "Cmplx.h"

template<typename T>
Complex<T> :: Complex() : m_real(),m_imag() {}
template<typename T>
Complex<T> :: Complex(T a, T b) : m_real(a) , m_imag(b) {}
template<typename T>
void Complex<T>:: display()
{
    std::cout<< m_real << " "<< m_imag << "i" << "\n";
}


int main()
{
    Complex<int> x(2,-3);
    Complex<float> y(-3.8,4.2);
    x.display();
    y.display();

    return 0;
}
