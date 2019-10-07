#include <iostream>
#include "Bank.h"
Bank::Bank(int acc_num, const char *acc_name, float deposit)
{
    account_number = acc_num;
    account_name   = acc_name;
    init_deposit   = deposit;
}
void Bank::get_account_details(){
    std::cout<<account_number<<std::endl;
    std::cout<<account_name<<std::endl;
    std::cout<<init_deposit<<std::endl;
}