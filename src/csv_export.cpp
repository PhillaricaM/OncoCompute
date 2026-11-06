
#include "oncocompute/csv_export.hpp"
#include "oncocompute/data_validation.hpp"

#include <fstream>
#include <iomanip>
#include <stdexcept>

namespace oncocompute {

    void export_validated_csv(
        const std::vector<NCIRecord>& records,
        const std::string& filename
    ) {
        std::ofstream output(filename);

        if (!output.is_open()) {
            throw std::runtime_error(
                "Could not create CSV file: " + filename
            );
        }

        output << "compound_id,cancer_panel,cell_line,"
            << "average_log_gi50\n";

        output << std::fixed << std::setprecision(4);

        for (const auto& record : records) {

            if (!validate_nci_record(record)) {
                continue;
            }

            output << record.compound_id << ","
                << record.cancer_panel << ","
                << record.cell_line << ","
                << record.average_log_gi50 << "\n";
        }

        if (!output) {
            throw std::runtime_error(
                "Error while writing CSV file: " + filename
            );
        }
    }

}
