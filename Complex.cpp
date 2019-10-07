#include <iostream>
#include <cmath>
#include "Complex.h"
Complex::Complex(int real_num,int img_num){
    real_number = real_num;
    img_number  = img_num;
} 
int Complex::get_real(){
    return real_number;
}
int Complex::get_img(){
    return img_number;

}
Complex Complex::add(Complex a){
    Complex sum;
    sum.real_number = a.get_real() + real_number;
    sum.img_number  = a.get_img() +  img_number;
    return sum;
}
Complex Complex::subtract(Complex a){
    Complex diff;
    diff.real_number = a.get_real() - real_number;
    diff.img_number = a.get_img() - img_number;
    return diff;
}
Complex Complex::product(Complex a){
    Complex product;
    product.real_number = (a.get_real()* real_number) - (a.get_img()*img_number);
    product.img_number  = (a.get_real() * img_number) + (a.get_img() * real_number);
    return product;
}
double Complex::magnitude(){
    int mag = real_number*real_number + img_number*img_number;
    return sqrt(mag);
}
double Complex::magnitude(Complex a){
    int diff_real = a.get_real() - real_number;
    int diff_img = a.get_img() - img_number;
    int mag = diff_img*diff_img + diff_real*diff_real;
    return sqrt(mag);
}
