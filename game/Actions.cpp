#include "Actions.h"

#include "../factory/FactoryMethod.h"

std::vector<std::unique_ptr<Field>> fieldCreation() {
 
    std::unordered_map<std::string, std::shared_ptr<FieldFactory> > map {
        make_pair("BasicField", std::make_shared<BasicFieldFactory>()),
        make_pair("GiftField", std::make_shared<GiftFieldFactory>()),
        make_pair("PolyanaField", std::make_shared<PolyanaFieldFactory>()),
        make_pair("PortalField", std::make_shared<PortalFieldFactory>()),
        make_pair("QuestionField", std::make_shared<QuestionFieldFactory>()),
        make_pair("SelectiveField", std::make_shared<SelectiveFieldFactory>()),
        make_pair("StartField", std::make_shared<StartFieldFactory>()),
        make_pair("VadimField", std::make_shared<VadimFieldFactory>())
    };

    std::vector<std::unique_ptr<Field>> vec;

    std::ifstream fin("resources/dataFields.json");
    json data = json::parse(fin);
    fin.close();

    for (json& fieldData : data) {
       std::unique_ptr<Field> tmp = map[fieldData.at("class")]->createField();
        tmp->deserialize(fieldData.at("properties"));
        vec.push_back(std::move(tmp));
    }
    return vec;
}