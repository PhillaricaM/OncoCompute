
#pragma once

#include <string>
#include <vector>

#include "oncocompute/nci_record.hpp"

namespace oncocompute {

    std::vector<NCIRecord> load_nci_csv(
        const std::string& filename
    );

}
