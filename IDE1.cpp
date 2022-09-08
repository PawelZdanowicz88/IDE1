
#include <iostream>
#include <fstream>
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned int size1 = 0;
    unsigned int size2 = 0;
    int temp = 0;
    int arr1[10]{};
    int arr2[10]{};
    
    std::ifstream f("in.txt");
    if (f.is_open()) {
        f >> size1;
        for (int i = 0; i < size1; ++i) {
            f >> temp;
            arr1[i] = temp;
        }
        f >> size2;
        for (int i = 0; i < size2; ++i) {
            f >> temp;
            arr2[i] = temp;
        }
    }
    else {
        std::cout << "Houston, we have a Problem. File can't open" << std::endl;
    }
    f.close();
    std::ofstream d("out.txt");
    d << size2 << std::endl;
    d << arr2[(size2 - 1)] << " ";
    for (int i = 0; i < (size2 - 1); ++i) {
        d << arr2[i] << " ";
    }
    d << std::endl;
    d << size1 << std::endl;
    for (int i = 1; i < size1; ++i) {
        d << arr1[i] << " ";
    }
    d << arr1[0];
    d.close();
    return 0;

}
