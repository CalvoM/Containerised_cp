#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex{
    private:
        int real_number,img_number;
    public:
        // Constructor 
        Complex(int real_num=0,int img_num=0);
        //Class methods
        Complex add(Complex a);
        Complex subtract(Complex a);
        Complex product(Complex a);
        double magnitude(Complex a);
        double magnitude();
        //getting private variables
        int get_real();
        int get_img();
        //operator overloading
        Complex operator +(Complex a){
            Complex sum;
            sum.real_number = a.get_real() + real_number;
            sum.img_number = a.get_img() + img_number;
            return sum;
        }
        Complex operator -(Complex a){
            Complex diff;
            diff.real_number = a.get_real() - real_number;
            diff.img_number = a.get_img() - img_number;
            return diff;
        }
        Complex operator *(Complex a){
            Complex product;
            product.real_number = (a.get_real() * real_number) - (a.get_img() * img_number);
            product.img_number = (a.get_real() * img_number) + (a.get_img() * real_number);
            return product;
        }
};

#endif // !COMPLEX_H_INCLUDED