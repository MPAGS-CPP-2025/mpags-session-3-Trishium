#include <iostream>
#include <string>

void print(const std::string string)
{
    std::cout << string << std::endl;
}

void print(const char* string)
{
    std::cout << string << std::endl;
}

void print(const char string)
{
    std::cout << string << std::endl;
}

int main()
{
    char in_char{'x'};
    std::string out_str{""};

    while (std::cin >> in_char) {
        if (in_char == '#') {
            print("exiting");
            break;
        }
        if (std::isalpha(in_char)) {
            in_char = std::toupper(in_char);
            out_str += in_char;
        } 
        else {
            switch (in_char) {
                case '0':
                    out_str += "ZERO";
                    break;
                case '1':
                    out_str += "ONE";
                    break;
                case '2':
                    out_str += "TWO";
                    break;
                case '3':
                    out_str += "THREE";
                    break;
                case '4':
                    out_str += "FOUR";
                    break;
                case '5':
                    out_str += "FIVE";
                    break;
                case '6':
                    out_str += "SIX";
                    break;
                case '7':
                    out_str += "SEVEN";
                    break;
                case '8':
                    out_str += "EIGHT";
                    break;
                case '9':
                    out_str += "NINE";
                    break;
                default:
                    print("Characters must be alphanumeric");
                    break;
            }
        }
    }
    print(out_str);
    return 0;
}
