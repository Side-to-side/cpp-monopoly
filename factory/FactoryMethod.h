#include "../fields/Field.h"
#include "../fields/BasicField.h"
#include "../fields/GiftField.h"
#include "../fields/PolyanaField.h"
#include "../fields/PortalField.h"
#include "../fields/QuestionField.h"
#include "../fields/SelectiveField.h"
#include "../fields/StartField.h"
#include "../fields/VadimField.h"

class FieldFactory{
public:
  virtual Field* createPlayer() = 0;
  virtual ~Factory() {};
}

class BasicFieldFactory : FieldFactory{
public:
    Field* createPlayer() { 
      return new BasicField; 
    }
}

class GiftFieldFactory : FieldFactory{
public:
    Field* createPlayer() { 
      return new GiftField; 
    }
}

class PolyanaFieldFactory : FieldFactory{
public:
    Field* createPlayer() { 
      return new PolyanaField; 
    }
}

class PortalFieldFactory : FieldFactory{
public:
    Field* createPlayer() { 
      return new PortalField; 
    }
}

class QuestionFieldFactory : FieldFactory{
public:
    Field* createPlayer() { 
      return new QuestionField; 
    }
}

class SelectiveFieldFactory : FieldFactory{
public:
    Field* createPlayer() { 
      return new SelectiveField; 
    }
}

class StartFieldFactory : FieldFactory{
public:
    Field* createPlayer() { 
      return new StartField; 
    }
}

class VadimFieldFactory : FieldFactory{
public:
    Field* createPlayer() { 
      return new VadimField; 
    }
}