
#include <iostream>
#include <string>

#include "oncocompute/csv_reader.hpp"

int main() {

    std::cout << "OncoCompute NCI-60 Data Analysis\n\n";

    std::string filename =
        std::string(ONCOCOMPUTE_DATA_DIR) +
        "/nci60_breast_nsc713750.csv";

    oncocompute::inspect_csv(filename);

    return 0;
}

