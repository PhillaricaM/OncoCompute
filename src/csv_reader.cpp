
#include "oncocompute/csv_reader.hpp"

#include <fstream>
#include <iostream>
#include <string>

namespace oncocompute {

    void inspect_csv(const std::string& filename) {

        std::ifstream file(filename);

        if (!file.is_open()) {
            std::cerr << "Error: Could not open CSV file: "
                << filename << '\n';
            return;
        }

        std::string line;

        while (std::getline(file, line)) {
            std::cout << line << '\n';
        }
    }

}
