#ifndef tp_data_math_utils_FloatsMember_h
#define tp_data_math_utils_FloatsMember_h

#include "tp_data_math_utils/Globals.h"

#include "tp_data/AbstractMemberFactory.h"

#include "json.hpp"

namespace tp_data_math_utils
{

//##################################################################################################
class FloatsMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  FloatsMember(const std::string& name=std::string());

  //################################################################################################
  ~FloatsMember();

  //################################################################################################
  static FloatsMember* fromJSON(const nlohmann::json& j);

  //################################################################################################
  nlohmann::json toJSON() const;

  std::vector<float> data;
};

//##################################################################################################
using FloatsMemberFactory = tp_data::JSONMemberFactoryTemplate<FloatsMember, floatsSID>;
}

#endif
