#include "pch.h"
#include "FizzBuzz.h"

std::string FizzBuzz::change(int num)
{
    if (num == 3) return "Fizz";;
    if (num == 5) return "Buzz";;

    return std::to_string(num);
}
