#ifndef CPP_STRING_H
#define CPP_STRING_H
#include <string>

namespace string_toys
{

    auto reverse(const std::string &str) -> std::string
    {
        std::string rev_str;
        for (int i = str.length() - 1; i >= 0; i--)
        {
            rev_str += str[i];
        }
        return rev_str;
    }

    auto first_to_upper(const std::string &str) -> std::string
    {
        std::string new_str;
        bool first = true;
        for (int i = 0; i < str.length(); i++)
        {
            new_str += str[i];
            if (str[i] == ' ' || str[i] == '\n')
            {
                first = true;
            }
            else
            {
                if (first && new_str[i] >= 'a' && new_str[i] <= 'z')
                {
                    new_str[i] -= ('a' - 'A');
                }
                first = false;
            }
        }
        return new_str;
    }

    auto count_vowels(const std::string &str) -> int
    {
        int count = 0;
        std::string vowels = "aeiouyAEIOUY";
        for (int i = 0; i < str.length(); i++)
        {
            if (vowels.find(str[i]) != std::string::npos)
            {
                count++;
            }
        }
        return count;
    }

    auto sum_digits(const std::string &str) -> int
    {
        int sum = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]))
            {
                sum += str[i] - '0';
            }
        }
        return sum;
    }

    auto search_substr(const std::string &str, const std::string &substr) -> int
    {
        int pos = -1;
        for (int i = 0; i <= str.length() - substr.length(); i++)
        {
            bool found = true;
            for (int j = 0; j < substr.length(); j++)
            {
                if (str[i + j] != substr[j])
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                pos = i;
                break;
            }
        }
        return pos;
    }

    auto custom_search(const char *str, const char *substr) -> int
    {
        int pos = -1;
        const char *p = str;
        const char *q = substr;
        while (*p != '\0')
        {
            if (*p == *q)
            {
                const char *temp_p = p;
                const char *temp_q = q;
                while (*temp_p == *temp_q && *temp_p != '\0' && *temp_q != '\0')
                {
                    temp_p++;
                    temp_q++;
                }
                if (*temp_q == '\0')
                {
                    pos = p - str;
                    break;
                }
            }
            p++;
        }
        return pos;
    }

}

#endif /* CPP_STRING_H */
