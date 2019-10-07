#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED
class Bank{
    private:
        int account_number;
        const char *account_name;
        float init_deposit;
    public:
        Bank(int acc_num, const char *acc_name, float deposit);
        void get_account_details();
};

#endif // !BANK_H