#include "tp_data_math_utils/members/Vec3Member.h"

#include "tp_math_utils/JSONUtils.h"

namespace tp_data_math_utils
{
//##################################################################################################
Vec3Member::Vec3Member(const std::string& name):
  tp_data::AbstractMember(name, vector3SID())
{

}

//##################################################################################################
Vec3Member::~Vec3Member()=default;

//##################################################################################################
Vec3Member* Vec3Member::fromJSON(const nlohmann::json& j)
{
  auto member = new Vec3Member();
  member->data = tp_math_utils::vec3FromJSON(j);
  return member;
}

//##################################################################################################
nlohmann::json Vec3Member::toJSON() const
{
  return tp_math_utils::vec3ToJSON(data);
}

}
