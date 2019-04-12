#include "tp_data_math_utils/members/FloatsMember.h"

namespace tp_data_math_utils
{
//##################################################################################################
FloatsMember::FloatsMember(const std::string& name):
  tp_data::AbstractMember(name, floatsSID())
{

}

//##################################################################################################
FloatsMember::~FloatsMember()=default;

//##################################################################################################
FloatsMember* FloatsMember::fromJSON(const nlohmann::json& j)
{
  auto member = new FloatsMember();

  if(j.is_array())
  {
    member->data.reserve(j.size());
    for(const auto& jj : j)
      if(jj.is_number())
        member->data.push_back(float(jj));
  }

  return member;
}

//##################################################################################################
nlohmann::json FloatsMember::toJSON() const
{
  nlohmann::json j = nlohmann::json::array();
  for(float v : data)
    j.push_back(v);
  return j;
}

}
