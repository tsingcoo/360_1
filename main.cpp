#include <iostream>
#include <string>

int main() {
    int n;
    while (std::cin >> n) {
        int res = 0;
        std::string str = std::to_string(n);
//        std::cout<<str<<std::endl;
        auto len = str.size();
        int flag = len;//这个要非常注意
        for (int i = 0; i < len; ++i) {
            if (str[i] > '1') {
//                std::cout<<"不可能"<<std::endl;
                flag = i;
                break;
            }
        }
//        std::cout<<flag<<std::endl;
        for (int i = flag; i < len; ++i) {
            str[i] = '1';
        }
//        std::cout << str << std::endl;
        int p = 1;
        for (int i = len - 1; i >= 0; --i) {
            if (str[i] == '1') {
//                std::cout << "bu" << std::endl;
                res += p;

            }
            p *= 2;//不管加不加都要乘2
        }
        std::cout << res << std::endl;
    }

    return 0;
}