
#include "oncocompute/data_validation.hpp"

#include <cmath>

namespace oncocompute {

    bool validate_nci_record(const NCIRecord& record) {

        // Compound identifiers must be positive.
        if (record.compound_id <= 0) {
            return false;
        }

        // Cancer panel must have a name.
        if (record.cancer_panel.empty()) {
            return false;
        }

        // Cell line must have a name.
        if (record.cell_line.empty()) {
            return false;
        }

        // Measurements must be finite numbers.
        if (!std::isfinite(record.average_log_gi50)) {
            return false;
        }

        return true;
    }

}
