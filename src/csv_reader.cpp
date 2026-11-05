

#include "oncocompute/csv_reader.hpp"

#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

namespace oncocompute {

    std::vector<NCIRecord> load_nci_csv(
        const std::string& filename
    ) {
        std::ifstream file(filename);

        if (!file.is_open()) {
            throw std::runtime_error(
                "Could not open CSV file: " + filename
            );
        }

        std::vector<NCIRecord> records;
        std::string line;

        // Skip the header row
        std::getline(file, line);

        // Read each experimental record
        while (std::getline(file, line)) {

            if (line.empty()) {
                continue;
            }

            std::stringstream ss(line);
            std::string field;
            std::vector<std::string> columns;

            // Split the row into columns
            while (std::getline(ss, field, ',')) {
                columns.push_back(field);
            }

            // Ensure the expected columns exist
            if (columns.size() != 14) {
                throw std::runtime_error(
                    "Unexpected number of CSV columns"
                );
            }

            NCIRecord record;

            record.compound_id = std::stoi(columns[3]);
            record.cancer_panel = columns[8];
            record.cell_line = columns[9];
            record.average_log_gi50 =
                std::stod(columns[12]);

            records.push_back(record);
        }

        return records;
    }

}
