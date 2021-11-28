#include "Actions.h"

template <class FieldDerived>

std::unique_ptr<Field> createInstance() {
  return std::make_unique<FieldDerived>();
}

std::vector<std::unique_ptr<Field>> fieldCreation() {

    std::unordered_map<std::string, std::unique_ptr<Field>(*)() >  map{
      std::make_pair("StartField", &createInstance<StartField>),
      std::make_pair("BasicField", &createInstance<BasicField>),
      std::make_pair("QuestionField", &createInstance<QuestionField>),
      std::make_pair("PortalField", &createInstance<PortalField>),
      std::make_pair("PolyanaField", &createInstance<PolyanaField>),
      std::make_pair("SelectiveField", &createInstance<SelectiveField>),
      std::make_pair("VadimField", &createInstance<VadimField>),
      std::make_pair("GiftField", &createInstance<GiftField>)
    };

    std::vector<std::unique_ptr<Field>> vec;
    std::ifstream fin("resources/dataFields.json");
    json data = json::parse(fin);
    fin.close();

    for (const json& fieldData : data) {
       std::unique_ptr<Field> tmp = map[fieldData.at("class")]();
        tmp->deserialize(fieldData.at("properties"));
        vec.push_back(std::move(tmp));
    }
    return vec;
}