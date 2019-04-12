#ifndef tp_data_math_utils_Vec3Member_h
#define tp_data_math_utils_Vec3Member_h

#include "tp_data_math_utils/Globals.h"

#include "tp_data/AbstractMemberFactory.h"

#include "glm/glm.hpp"

#include "json.hpp"

namespace tp_data_math_utils
{

//##################################################################################################
class Vec3Member : public tp_data::AbstractMember
{
public:
  //################################################################################################
  Vec3Member(const std::string& name=std::string());

  //################################################################################################
  ~Vec3Member();

  //################################################################################################
  static Vec3Member* fromJSON(const nlohmann::json& j);

  //################################################################################################
  nlohmann::json toJSON() const;

  glm::vec3 data{0.0f, 0.0f, 0.0f};
};

//##################################################################################################
using Vec3MemberFactory = tp_data::JSONMemberFactoryTemplate<Vec3Member, vector3SID>;

}

#endif
