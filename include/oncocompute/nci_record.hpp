
#pragma once

#include <string>

namespace oncocompute {

    struct NCIRecord {

        int compound_id;

        std::string cancer_panel;

        std::string cell_line;

        double average_log_gi50;

    };

}
