#include "tp_data_math_utils/members/PointsMember.h"

#include "tp_math_utils/JSONUtils.h"

namespace tp_data_math_utils
{
//##################################################################################################
PointsMember::PointsMember(const std::string& name):
  tp_data::AbstractMember(name, pointsSID())
{

}

//##################################################################################################
PointsMember::~PointsMember()=default;

//##################################################################################################
PointsMember* PointsMember::fromJSON(const nlohmann::json& j)
{
  auto member = new PointsMember();
  member->data = tp_math_utils::vec3VectorFromJSON(j);
  return member;
}

//##################################################################################################
nlohmann::json PointsMember::toJSON() const
{
  return tp_math_utils::vec3VectorToJSON(data);
}

}
