
#pragma once

#include <string>
#include <vector>

#include "oncocompute/nci_record.hpp"

namespace oncocompute {

    void export_validated_csv(
        const std::vector<NCIRecord>& records,
        const std::string& filename
    );

}
