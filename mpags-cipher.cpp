#include <iostream>
#include <string>

void print(const std::string string){
    std::cout << string << std::endl;
}

void print(const char* string){
    std::cout << string << std::endl;
}

void print(const char string){
    std::cout << string << std::endl;
}

int main(){
    // comment
    /*
     comment
    */
    std::string hello{"Hello World!"};
    int a{2};
    a = 3;
    a++;
    a = a%3;
    a = a << 2;
    const double b{1.2};

    const int d[4]{1,2,3,4};
    const int e{d[0]+d[1]+d[2]+d[3]};
    std::cout << a << " is an integer" << std::endl;
    std::cout << b << " is a double" << std::endl;
    const double c{a*b};
    std::cout << c << std::endl;
    std::cout << hello << std::endl;
    std::cout << d[0] << " is the start of a list" << std::endl;
    std::cout << e << " is the sum of digits 1 to 4" << std::endl;

    std::cout << a/b << " An int divided by a double" << std::endl;
    std::cout << b/a << " A double divided by an int" << std::endl;
    std::cout << e/a << " An int divided by an int" << std::endl;
    
    const char letter{hello[0]};
    print(std::string{letter} + std::string{" is a letter in the hello variable"});

    print("prep all done!");

    char in_char{'x'};
    std::string out_str{""};

    while(std::cin >> in_char){
        if (in_char == '#'){
            print("exiting");
            break;
        }
        if(std::isalpha(in_char)){
            in_char = std::toupper(in_char);
            out_str += in_char;
        }
        else{
            switch (in_char){
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
