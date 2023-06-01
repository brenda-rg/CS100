#include <iostream>

class VerifyDate {
    private: 
    bool verify_day(int);
    bool verify_month(int);
    bool verify_year(int);
    public:
    bool verify_monthDayYear(int, int, int);
}