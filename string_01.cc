#include "string_01.h"
#include <iostream>
using namespace string_toys;
using namespace std;

auto main() -> int {
    string string, substr;

    cout<<"input string:"<<endl;
    getline(cin, string);

    cout<<"input substring:"<<endl;
    getline(cin, substr);

    cout<<"reverse           "<<reverse(string)<<endl;
    cout<<"first_to_upper    "<<first_to_upper(string)<<endl;
    cout<<"count_vowels      "<<count_vowels(string)<<endl;
    cout<<"sum_digits        "<<sum_digits(string)<<endl;
    cout<<"search_substr     "<<search_substr(string, substr)<<endl;
    cout<<"custom_search     "<<custom_search(string.c_str(), substr.c_str())<<endl;

    return 0;
}
