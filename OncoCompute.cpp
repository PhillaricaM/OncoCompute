
#include <iostream>
#include <string>
#include <vector>

#include "oncocompute/csv_reader.hpp"
#include "oncocompute/data_validation.hpp"

int main() {

    std::string filename =
        std::string(ONCOCOMPUTE_DATA_DIR) +
        "/nci60_breast_nsc713750.csv";

    try {
        std::vector<oncocompute::NCIRecord> records =
            oncocompute::load_nci_csv(filename);

        std::cout << "OncoCompute NCI-60 Data Validation\n\n";

        int valid_count = 0;
        int invalid_count = 0;

        for (const auto& record : records) {

            bool is_valid =
                oncocompute::validate_nci_record(record);

            std::cout
                << "Compound: NSC " << record.compound_id
                << " | Cell line: " << record.cell_line
                << " | Measurement: "
                << record.average_log_gi50
                << " | Status: "
                << (is_valid ? "VALID" : "INVALID")
                << '\n';

            if (is_valid) {
                ++valid_count;
            }
            else {
                ++invalid_count;
            }
        


    }  // End of the for loop

    // Test our validation function with invalid data.
    oncocompute::NCIRecord test_record;

    test_record.compound_id = -100;
    test_record.cancer_panel = "Breast Cancer";
    test_record.cell_line = "";
    test_record.average_log_gi50 = -5.0;

    bool test_result =
        oncocompute::validate_nci_record(test_record);

    std::cout << "\nInvalid record test: "
        << (test_result ? "FAILED" : "PASSED")
        << '\n';

    // Existing summary code continues below.


        std::cout << "\nTotal records: " << records.size();
        std::cout << "\nValid records: " << valid_count;
        std::cout << "\nInvalid records: " << invalid_count
            << '\n';

    }
    catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << '\n';
        return 1;   
    }

    return 0;
}
