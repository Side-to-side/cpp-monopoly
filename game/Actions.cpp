#include "Actions.h"

#include "../fields/Field.h"

#include "C:/Users/lesec/Desktop/cpp-monopoly/lib/json.hpp"

// function to transfer field data from files to vector

std::vector<std::unique_ptr<Field>> fieldCreation() {
    std::vector<std::unique_ptr<Field>> vec;

    std::ifstream fin("C:/Users/lesec/Desktop/cpp-monopoly/resources/dataFields.json");
    json data = json::parse(fin);
    fin.close();

    for (const json& fieldData : data) {
        std::cout << fieldData.at("class") << std::endl;
        //Field::ptr tmp = map[fieldData.at("class")]();
        //tmp->deserialize(fieldData.at("properties"));
        //vec.push_back(std::move(tmp));
    }
    return vec;
}