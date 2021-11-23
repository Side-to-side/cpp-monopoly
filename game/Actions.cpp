#include "Actions.h"

template <class FieldDerived>

std::unique_ptr<Field> createInstance() {
  return std::make_unique<FieldDerived>();
}

std::vector<std::unique_ptr<Field>> fieldCreation() {

    std::unordered_map<std::string, std::unique_ptr<Field> (*)() >  map = {
      {"StartField", &createInstance<StartField>},
      {"BasicField", &createInstance<BasicField>},
      {"QuestionField", &createInstance<QuestionField>},
      {"PortalField", &createInstance<PortalField>},
      {"PolyanaField", &createInstance<PolyanaField>},
      {"SelectiveField", &createInstance<SelectiveField>},
      {"VadimField", &createInstance<VadimField>},
      {"GiftField", &createInstance<GiftField>}
  };

    std::vector<std::unique_ptr<Field>> vec;

    std::ifstream fin("resources/dataFields.json");
    json data = json::parse(fin);
    fin.close();

    for (const json& fieldData : data) {
       std::unique_ptr<Field> tmp = map[fieldData.at("class")]();
        
        vec.push_back(std::move(tmp));
        //std::cout << a << " ";  
        std::cout << fieldData.at("class") << std::endl;
       // std::cout << fieldData.at("properties").at("cost") << std::endl;
        
        //Field::ptr tmp = map[fieldData.at("class")]();
        //tmp->deserialize(fieldData.at("properties"));
        //vec.push_back(std::move(tmp));
    }
    return vec;
}