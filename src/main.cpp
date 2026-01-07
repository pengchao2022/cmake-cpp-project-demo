#include <iostream>
#include <vector>
#include <string>

// 简单的函数示例
int add(int a, int b) {
    return a + b;
}

// 简单的类示例
class Calculator {
public:
    static int multiply(int a, int b) {
        return a * b;
    }
    
    static double divide(double a, double b) {
        if (b == 0) {
            throw std::runtime_error("Division by zero!");
        }
        return a / b;
    }
};

int main() {
    std::cout << "==================================" << std::endl;
    std::cout << "     Simple CMake C++ Project     " << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << std::endl;
    
    // 基本计算
    std::cout << "Basic Calculations:" << std::endl;
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "5 * 3 = " << Calculator::multiply(5, 3) << std::endl;
    
    try {
        std::cout << "10 / 2 = " << Calculator::divide(10, 2) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    
    // 向量示例
    std::vector<std::string> features = {
        "CMake build system",
        "C++17 standard",
        "Clean project structure",
        "Easy to extend"
    };
    
    std::cout << "Project Features:" << std::endl;
    for (size_t i = 0; i < features.size(); ++i) {
        std::cout << "  " << i + 1 << ". " << features[i] << std::endl;
    }
    
    std::cout << std::endl;
    
    // 系统信息
    std::cout << "System Information:" << std::endl;
    std::cout << "C++ version: " << __cplusplus << std::endl;
    #ifdef __APPLE__
    std::cout << "Platform: macOS" << std::endl;
    #endif
    #ifdef __clang__
    std::cout << "Compiler: Clang " << __clang_major__ << "." 
              << __clang_minor__ << "." << __clang_patchlevel__ << std::endl;
    #endif
    
    std::cout << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << "        Program Finished!         " << std::endl;
    std::cout << "==================================" << std::endl;
    
    return 0;
}