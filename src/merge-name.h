#pragma once

#include <vector>

#include <nlohmann/json.hpp>

nlohmann::json MergeNameTable(std::vector<nlohmann::json> &nametables);
