#ifndef tp_data_math_utils_PointsMember_h
#define tp_data_math_utils_PointsMember_h

#include "tp_data_math_utils/Globals.h"

#include "tp_data/AbstractMemberFactory.h"

#include "glm/glm.hpp"

#include "json.hpp"

namespace tp_data_math_utils
{

//##################################################################################################
class PointsMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  PointsMember(const std::string& name=std::string());

  //################################################################################################
  ~PointsMember();

  //################################################################################################
  static PointsMember* fromJSON(const nlohmann::json& j);

  //################################################################################################
  nlohmann::json toJSON() const;

  std::vector<glm::vec3> data;
};

//##################################################################################################
using PointsMemberFactory = tp_data::JSONMemberFactoryTemplate<PointsMember, pointsSID>;
}

#endif
