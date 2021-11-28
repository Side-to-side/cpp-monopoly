#include "../fields/Field.h"
#include "../fields/BasicField.h"
#include "../fields/GiftField.h"
#include "../fields/PolyanaField.h"
#include "../fields/PortalField.h"
#include "../fields/QuestionField.h"
#include "../fields/SelectiveField.h"
#include "../fields/StartField.h"
#include "../fields/VadimField.h"

class FieldFactory {
public:
    virtual std::unique_ptr<Field> createField() const = 0;
};

class BasicFieldFactory : public FieldFactory {
public:
    std::unique_ptr<Field> createField() const {
        return std::make_unique<BasicField>();
    }
};

class GiftFieldFactory : public FieldFactory{
public:
    std::unique_ptr<Field> createField() const { 
        return std::make_unique<GiftField>(); 
    }
};

class PolyanaFieldFactory : public FieldFactory{
public:
    std::unique_ptr<Field> createField() const { 
        return std::make_unique<PolyanaField>(); 
    }
};

class PortalFieldFactory : public FieldFactory{
public:
    std::unique_ptr<Field> createField() const { 
        return std::make_unique<PortalField>(); 
    }
};

class QuestionFieldFactory : public FieldFactory{
public:
    std::unique_ptr<Field> createField() const { 
        return std::make_unique<QuestionField>(); 
    }
};

class SelectiveFieldFactory : public FieldFactory{
public:
    std::unique_ptr<Field> createField() const { 
        return std::make_unique<SelectiveField>(); 
    }
};

class StartFieldFactory : public FieldFactory {
public:
    std::unique_ptr<Field> createField() const {
        return std::make_unique<StartField>();
    }
};

class VadimFieldFactory : public FieldFactory{
public:
    std::unique_ptr<Field> createField() const { 
        return std::make_unique<VadimField>(); 
    }
};