#ifndef tp_data_math_utils_Mat4Member_h
#define tp_data_math_utils_Mat4Member_h

#include "tp_data_math_utils/Globals.h"

#include "tp_data/AbstractMemberFactory.h"

#include "glm/glm.hpp"

#include "json.hpp"

namespace tp_data_math_utils
{

//##################################################################################################
class Mat4Member : public tp_data::AbstractMember
{
public:
  //################################################################################################
  Mat4Member(const std::string& name=std::string());

  //################################################################################################
  ~Mat4Member();

  //################################################################################################
  static Mat4Member* fromJSON(const nlohmann::json& j);

  //################################################################################################
  nlohmann::json toJSON() const;

  glm::mat4 data;
};

//##################################################################################################
using Mat4MemberFactory = tp_data::JSONMemberFactoryTemplate<Mat4Member, matrix4SID>;

}

#endif
