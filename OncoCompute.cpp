

#include <iostream>
#include <string>
#include <vector>

#include "oncocompute/csv_reader.hpp"

int main() {

    std::string filename =
        std::string(ONCOCOMPUTE_DATA_DIR) +
        "/nci60_breast_nsc713750.csv";

    try {
        std::vector<oncocompute::NCIRecord> records =
            oncocompute::load_nci_csv(filename);

        std::cout << "OncoCompute NCI-60 Analysis\n\n";

        for (const auto& record : records) {

            std::cout
                << "Compound: NSC " << record.compound_id
                << " | Cell line: " << record.cell_line
                << " | Reported value: "
                << record.average_log_gi50
                << '\n';
        }

        std::cout << "\nTotal records: "
            << records.size() << '\n';

    }
    catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << '\n';
        return 1;
    }

    return 0;
}

