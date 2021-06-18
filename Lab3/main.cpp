#include <iostream> 
#include <vector>

//Al-Taimee Hassan

// the errors shown below do not impact the functionality of my code

std::vector<bool> A = {0, 0, 0, 0, 1, 1, 1, 1};
std::vector<bool> B = {0, 0, 1, 1, 0, 0, 1, 1};
std::vector<bool> C = {0, 1, 0, 1, 0, 1, 0, 1};

int helper_nor_function(int &holder) {
    return (!(A[holder] || C[holder]) ^ B[holder]);
}

int helper_implies_nand_function(int &holder) {
    return !(!(B[holder] && !C[holder]) && !(A[holder] || B[holder]));
}

int helper_implies_xor_function(int &holder) {
    return !((A[holder] ^ B[holder]) && !(!(B[holder] ^ C[holder])));
}

int helper_implies_implies_function(int &holder) {
    return (!(!(A[holder] && !B[holder]) && !(!C[holder])));
}

int main() {
    int temp = 0;
    do {
        // 1
        std::cout << "(A nor C) xor B: " << helper_nor_function(temp) << "\n";
        // 2
        std::cout << "(B implies C) nand (A nor B): " << helper_implies_nand_function(temp) << "\n";
        // 3
        std::cout << "(A xor B) implies (B xnor C): " << helper_implies_xor_function(temp) << "\n";
        // 4 
        std::cout << "(A implies B) implies !C: " << helper_implies_implies_function(temp) << "\n" << "\n";

        temp++;
        
    }

    while(temp < 8);
    
    return 0;
}
