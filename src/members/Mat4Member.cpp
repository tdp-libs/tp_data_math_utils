#include "tp_data_math_utils/members/Mat4Member.h"

#include "tp_math_utils/JSONUtils.h"

namespace tp_data_math_utils
{
//##################################################################################################
Mat4Member::Mat4Member(const std::string& name):
  tp_data::AbstractMember(name, matrix4SID())
{

}

//##################################################################################################
Mat4Member::~Mat4Member()=default;

//##################################################################################################
Mat4Member* Mat4Member::fromJSON(const nlohmann::json& j)
{
  auto member = new Mat4Member();
  member->data = tp_math_utils::mat4FromJSON(j);
  return member;
}

//##################################################################################################
nlohmann::json Mat4Member::toJSON() const
{
  return tp_math_utils::mat4ToJSON(data);
}

}
